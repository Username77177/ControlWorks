using System;
namespace ControlWork1
{
    public class Secondexercise
    {
        public static void sec_ex()
        {
            //Задание 2
            double sum = 0;
            Console.WriteLine("Введите значение n: ");
            double it = Convert.ToInt32(Console.ReadLine());
            for (double n = it; n >= 1; n--)
            {
                double b = 1;
                //(-1)^n
                double a = Math.Pow(-1,n);

                //n!
                double i1 = n;
                while (i1 != 1)
                {
                    b *= i1; // 1 * n * (n-1) * (n-2) * (n-3).. * 1 = n!
                    i1--;
                }

                sum += a/b;
            }

            Console.WriteLine("Сумма ряда ((-1)^n)/n! = " + sum + ", при n = " + it);
        }
    }
}


// while (it <= 0)
// {
//     //n!
//     result = result * it; //Факториал
//     //(-1)^n
//     double negativeornot = Math.Pow(-1, Convert.ToDouble(it)); //Числитель
//     //Fraction
//     sum += negativeornot / result; //Сумма
//     it -= 1;
// }