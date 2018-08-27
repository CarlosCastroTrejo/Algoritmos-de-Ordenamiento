#include <iostream>
#include<time.h>

using namespace std;

void quickSort(int arreglo[],int izquierda,int derecha) 
{
	int i = izquierda, j = derecha;
	int pivote = arreglo[(izquierda+derecha) / 2];

	// Particion

	while (i<=j)
	{
		while (arreglo[i]<pivote)
		{
			i++;
		}
		while (arreglo[j]>pivote)
		{
			j--;
		}
		if (i <= j) 
		{
			int temp = arreglo[i];
			arreglo[i] = arreglo[j];
			arreglo[j] = temp;
			i++;
			j--;
		}
	}

	if (izquierda < j) 
	{
		quickSort(arreglo, izquierda, j);
	}
	if (i < derecha)
	{
		quickSort(arreglo, i, derecha);
	}

}

int main() 
{

	int arreglo[10]{ 231,564,2131,2312,2333,11,22,33,44,1 };

	quickSort(arreglo,0,9);

	for (int x = 0; x < 10; x++) 
	{
		cout << arreglo[x] << endl;
	}

	system("pause");

}