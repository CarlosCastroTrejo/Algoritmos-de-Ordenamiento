#include <iostream>
#include<time.h>

using namespace std;


static void quicksort(int arreglo[], int inicio, int fin)
{
	int izq, der, pivote, temp;
	pivote = arreglo[(inicio+fin)/2];
	izq = inicio;
	der = fin;
	while (izq <= der)
	{
		while (arreglo[der] > pivote) 
		{
			der--;
		}
		while (arreglo[izq] < pivote) 
		{
			izq++;
		}
		if (izq <= der)
		{
			temp = arreglo[izq];
			arreglo[izq] = arreglo[der];
			arreglo[der] = temp;
			izq++;
			der--;
		}
	}
	
	if (inicio < der) 
	{
		quicksort(arreglo, inicio, der);
	}
	if (izq < fin) 
	{
		quicksort(arreglo, izq, fin);
	}
	
}

int main() 
{

	int arreglo[10]{ 231,564,2131,2312,2333,11,22,33,44,1 };

	
	quicksort(arreglo,0,sizeof(arreglo)/sizeof(arreglo[0])-1);

	for (int x = 0; x < 10; x++) 
	{
		cout << arreglo[x] << endl;
	}

	system("pause");

}