using System;

namespace SelectionSort
{
    class MainClass
    {
        public static void Main(string[] args)
        {
            Random random = new Random();
            
            int[] array = new int[10];

            for (int x = 0; x < 10;x++)
            {
                int number = random.Next(0, 10000);
                array[x] = number;
            }

            insertionSort(array);

            for (int x = 0; x <array.Length; x++)
            {
                Console.WriteLine(array[x]);
            }

        }

        public static void insertionSort(int[] array)
        {
            int menor = 0;
            int mayorTope = 0;
            for (int x = 0; x < array.Length;x++)
            {
                menor = array[x];
                mayorTope = x;
                for (int y = x + 1;y<array.Length;y++)
                {
                    if(array[y]<menor)
                    {
                        menor = array[y];
                        mayorTope = y;
                    }

                }
                array[mayorTope] = array[x];
                array[x] = menor;

            }
        }
    }
}
