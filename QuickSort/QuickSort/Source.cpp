#include <iostream>
#include<time.h>

using namespace std;

static int dividir(int arreglo[],int inicio, int fin)
{
	int izq, der, pivote, temp;
	pivote = arreglo[inicio];
	izq = inicio;
	der = fin;
	while (izq < der)
	{
		while (arreglo[der] > pivote)
			der--;
		while ((izq < der) &&
			(arreglo[izq] <= pivote))
			izq++;
		if (izq < der)
		{
			temp = arreglo[izq];
			arreglo[izq] = arreglo[der];
			arreglo[der] = temp;
		}
	}
	temp = arreglo[der];
	arreglo[der] = arreglo[inicio];
	arreglo[inicio] = temp;
	return der;
}

static void quicksort(int arreglo[], int inicio, int fin)
{
	int pivote;
	if (inicio < fin)
	{
		pivote = dividir(arreglo, inicio, fin);
		quicksort(arreglo, inicio, pivote - 1);
		quicksort(arreglo, pivote + 1, fin);
	}
}

int main() 
{

	int arreglo[10]{ 231,564,2131,2312,2333,11,22,33,44,1 };

	quicksort(arreglo,0,sizeof(arreglo)/sizeof(arreglo[0]));

	for (int x = 0; x < 10; x++) 
	{
		cout << arreglo[x] << endl;
	}

	system("pause");

}