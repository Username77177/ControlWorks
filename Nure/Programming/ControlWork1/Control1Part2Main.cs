using System;
using static ControlWork1.Firstexercise;
namespace ControlWork1
{
    class Control1Part2Main
    {
        static void Main(string[] args)
        {   
            Console.WriteLine("1 задание");
            Firstexercise.fir_ex(); //First exercise

            Console.WriteLine("2 задание");
            Secondexercise.sec_ex(); // Second exercise

            Console.WriteLine("3 задание (нажмите любую кнопку для продолжения)");
            Console.ReadKey();
            Thirdexercise.thir_ex(); //Third exercise
            
        }
    }
}