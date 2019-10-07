using System;

namespace ControlWork1
{
    public class Firstexercise 
    {
        static public void fir_ex()
        {
            //Задание 1
            int i = 0, sum = 0;

            while (i < 14)
            {
                Console.WriteLine("Введите значение (" + (i + 1) + ") :"); // Счёт начинается с 0, поэтому и +1
                int inp = Convert.ToInt32(Console.ReadLine()); //Конвертируем значения
                sum += inp;
                i++; //Инкремент

            }
                
            Console.WriteLine("Сумма вашего ряда = " + sum);

        }
    }
}