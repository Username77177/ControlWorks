using System;
using static ControlWork1.Firstexercise;
namespace ControlWork1
{
    class Control1Part2Main
    {
        static void Main(string[] args)
        {
            /*1. Написати програму, яка в циклі введе 14 значень і порахує добуток чисел,
             які діляться без залишку на 3 та не діляться без залишку на 5. */
            Console.WriteLine("1 задание");
            Firstexercise.fir_ex(); //First exercise

            /*2. Написати програму, яка введе значення змінної n, і порахує суму ряду (-1)^n/n! */
            Console.WriteLine("2 задание");
            Secondexercise.sec_ex(); // Second exercise

            /*3. Обчислити функцію
                y = e^(x/2) * b^x * (cos(z) + sin(z))
                z = sqrt((4b + x^2)/2) */
            Console.WriteLine("3 задание (нажмите любую кнопку для продолжения)");
            Console.ReadKey();
            Thirdexercise.thir_ex(); //Third exercise

            /*4. Знайти індекс найбільшого числа в масиві. 
                Якщо таких чисел декілька, знайти індекс першого з них. */
            Console.WriteLine("4 задание");
            Fourthexercise.fo_ex();
        }
    }
}