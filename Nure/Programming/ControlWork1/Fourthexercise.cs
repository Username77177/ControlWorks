using System;

namespace ControlWork1
{
    class Fourthexercise
    {
        public static void fo_ex()
        {
            //Fill the array
            Console.WriteLine("Введите числа (5 штук)");
            int[] array1 = new int[5];
            for (int i = 0; i < array1.Length; i++)
            {
                Console.WriteLine("Введите число (осталось " + (5 - i) + ")");
                array1[i] = Convert.ToInt32(Console.ReadLine());
            }

            //Sorting
            int biggerthanarray = array1[0];
            foreach (var item in array1)
            {
                if (item > biggerthanarray)
                {
                    biggerthanarray = item;
                }
            }

            Console.WriteLine("Наибольшее число в данном массиве: " + biggerthanarray + "\nЕго индекс: " + Array.IndexOf(array1, biggerthanarray));
        }
    }
}