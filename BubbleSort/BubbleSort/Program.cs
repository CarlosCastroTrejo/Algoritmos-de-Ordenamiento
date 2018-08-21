using System;

namespace BubbleSort
{
    class MainClass
    {
        public static void Main(string[] args)
        {
            Random random = new Random();

            int[] array = new int[20];

            for (int x = 0; x < 20;x++)
            {
                int number = random.Next(0, 100);
                array[x] = number;
            }

            bubbleSort(array);

            for (int x = 0; x < array.Length; x++)
            {
                Console.WriteLine(array[x]);
            }
        }



        public static void bubbleSort(int[] array)
        {
            bool sorted = false;
            int number = array.Length - 1;
            int temporal = 0;

            while(!sorted)
            {
                sorted = true;
                for (int x = 0; x < number;x++)
                {
                    if(array[x]>array[x+1])
                    {
                        sorted = false;
                        temporal = array[x + 1];
                        array[x + 1] = array[x];
                        array[x] = temporal;
                    }

                }
                number--;
            }
        }
    }
}
