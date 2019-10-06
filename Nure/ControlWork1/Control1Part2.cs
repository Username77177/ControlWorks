using System;
using System.Collections.Generic;

namespace ControlWork1 {
    class Control1Part2 {
        static void Main (string[] args) {
            //Задание 1
            int[] newintegerarray = new int[14];
            int i = 0;

            while (i < 14) {
                Console.WriteLine ("Введите значение (" + (i + 1) + ") :"); // Счёт начинается с 0, поэтому и +1
                newintegerarray[i] = Convert.ToInt32 (Console.ReadLine ()); //Конвертируем значения
                i++; //Инкремент
            }

            List<int> succesfulint = new List<int> (); //Создаем два списка (в них можно добавлять элементы)
            List<int> succesfulintsorted = new List<int> ();

            //Сложение
            for (int k = 0; k < 14; k++) {
                int fn = newintegerarray[k]; //Первое число
                for (int j = 0; j < 14; j++) {
                    int sn = newintegerarray[j]; //Второе число
                    int sum = fn + sn; //Сумма этих чисел
                    if (sum % 3 == 0) { //Если делится нацело и без остатка на 3 и не делится без остатка на 5
                        if (sum % 5 != 0) {
                            succesfulint.Add (sum); //Добавляем элемент в список
                        }
                    }
                }
            }
            //Сортировка
            foreach (int item in succesfulint) {
                if (succesfulintsorted.Contains (item) == false) {
                    succesfulintsorted.Add (item);
                    Console.WriteLine (item);
                }
            }

            //Задание 2
            double result = 1, result1 = 0;
            Console.WriteLine ("Введите значение n: ");
            int it = Convert.ToInt32 (Console.ReadLine ());
            while (it != 1) {
                //n!
                result = result * it; //Факториал
                //(-1)^n
                double negativeornot = Math.Pow (-1, Convert.ToDouble (it)); //Числитель
                //Fraction
                result1 += negativeornot / result; //Сумма
                it -= 1;
            }

            Console.WriteLine ("Сумма ряда ((-1)^n)/n! = " + (result1 - 1) + ", при n = " + it);

            //Задание 3
            /*First equation is y = e^(x/2) * b^x * (cos(z) + sin(z))
              Second equation is z = sqrt((4b + x^2)/2) */
            double y, z, x, hx, b;
            hx = 0.2;
            x = 1;

            // b = 2
            // Console.WriteLine ("b = 2\tb = 4\t b = 6\tb = 8")
            while (x <= 2) {
                b = 2;
                x = decimal.Round (x, 5, MidpointRounding.AwayFromZero); //Округление
                while (b != 10) {
                    Console.WriteLine ("\tb = " + b + "\n");
                    z = Math.Sqrt ((4 * b + Math.Pow (x, 2)) / 2);
                    y = Math.Pow (Math.E, x / 2) * Math.Pow (b, x) * (Math.Cos (z) + Math.Sin (z));
                    Console.Write ("x = " + x + "\nz = " + z + "\ny = " + y + "\n\n");
                    b += 2;

                }
                x += hx;
            }

        }
    }
}