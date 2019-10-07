using System;
using System.Collections.Generic;

namespace ControlWork1
{
    public class Firstexercise 
    {
        static public void fir_ex()
        {
            //Задание 1
            int[] newintegerarray = new int[14];
            int i = 0;

            while (i < 14)
            {
                Console.WriteLine("Введите значение (" + (i + 1) + ") :"); // Счёт начинается с 0, поэтому и +1
                newintegerarray[i] = Convert.ToInt32(Console.ReadLine()); //Конвертируем значения
                i++; //Инкремент
            }

            List<int> succesfulint = new List<int>(); //Создаем два списка (в них можно добавлять элементы)
            List<int> succesfulintsorted = new List<int>();

            //Сложение
            for (int k = 0; k < 14; k++)
            {
                int fn = newintegerarray[k]; //Первое число
                for (int j = 0; j < 14; j++)
                {
                    int sn = newintegerarray[j]; //Второе число
                    int sum = fn + sn; //Сумма этих чисел
                    if (sum % 3 == 0)
                    { //Если делится нацело и без остатка на 3 и не делится без остатка на 5
                        if (sum % 5 != 0)
                        {
                            succesfulint.Add(sum); //Добавляем элемент в список
                        }
                    }
                }
            }
            //Сортировка
            foreach (int item in succesfulint)
            {
                if (succesfulintsorted.Contains(item) == false)
                {
                    succesfulintsorted.Add(item);
                    Console.WriteLine(item);
                }
            }

        }
    }
}