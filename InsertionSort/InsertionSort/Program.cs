using System;

namespace InsertionSort
{
    class MainClass
    {
        public static void Main(string[] args)
        {
            Random random = new Random();

            int[] array = new int[20];

            for (int x = 0; x < 20; x++)
            {
                int number = random.Next(0, 100);
                array[x] = number;
            }

            insertionSort(array);

            for (int x = 0; x < array.Length; x++)
            {
                Console.WriteLine(array[x]);
            }

        }

        public static void insertionSort(int[] array)
        {
            for (int x = 1;x< array.Length ;x++)
            {

                int j = (x - 1);
                int temp = array[x];
                while(array[j]>temp && j>=0)
                {
                    array[j + 1] = array[j];
                    j--;
                }
                array[j + 1] = temp;

            }

        }
    }
}
