using System;
namespace ControlWork1
{
    public class Secondexercise
    {
        public static void sec_ex()
        {
            //Задание 2
            double result = 1, result1 = 0;
            Console.WriteLine("Введите значение n: ");
            int it = Convert.ToInt32(Console.ReadLine());
            while (it != 1)
            {
                //n!
                result = result * it; //Факториал
                //(-1)^n
                double negativeornot = Math.Pow(-1, Convert.ToDouble(it)); //Числитель
                //Fraction
                result1 += negativeornot / result; //Сумма
                it -= 1;
            }

            Console.WriteLine("Сумма ряда ((-1)^n)/n! = " + (result1 - 1) + ", при n = " + it);
        }
    }
}