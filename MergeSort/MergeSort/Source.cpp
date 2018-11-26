#include<iostream>

using namespace std;


void doMerge(int arreglo[],int izquierda,int medio,int derecha) 
{
	int tamIzquierdo = medio - izquierda + 1;
	int tamDerecho = derecha - medio;
	int *arrIzquierda = new int[tamIzquierdo];
	int *arrDerecho = new int[tamDerecho];

	for (int x = 0; x < tamIzquierdo; x++) 
	{
		arrIzquierda[x] = arreglo[izquierda + x];
	}
	for (int x = 0; x < tamDerecho; x++)
	{
		arrDerecho[x] = arreglo[medio + x + 1];
	}

	int i = 0;
	int j = 0;
	int k = izquierda;


	while (i < tamIzquierdo && j < tamDerecho) 
	{
		if (arrIzquierda[i] <= arrDerecho[j]) 
		{
			arreglo[k] = arrIzquierda[i++];
		}
		else
		{
			arreglo[k] = arrDerecho[j++];
		}
		k++;
	}

	while (i < tamIzquierdo) 
	{
		arreglo[k++] = arrIzquierda[i++];
	}
	while (j < tamDerecho)
	{
		arreglo[k++] = arrDerecho[j++];
	}

}

void merge(int arreglo[],int izquierda,int derecha) 
{
	if (izquierda < derecha) 
	{
		int medio = izquierda + (derecha - izquierda) / 2;
		merge(arreglo, izquierda, medio);
		merge(arreglo, medio + 1, derecha);
		doMerge(arreglo, izquierda, medio, derecha);
	}
}

int main() 
{
	int arreglo[10]{213,1231,5,2123,11,232,54,22,423,2};


	merge(arreglo, 0, 9);

	for (int x = 0; x < 10; x++)
	{
		cout << arreglo[x] << endl;
	
	}


	system("pause");

}