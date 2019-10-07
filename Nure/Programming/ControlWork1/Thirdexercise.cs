using System;
namespace ControlWork1
{
    class Thirdexercise
    {
        public static void thir_ex()
        {
            //Задание 3
            /*First equation is y = e^(x/2) * b^x * (cos(z) + sin(z))
              Second equation is z = sqrt((4b + x^2)/2) */
            double y, z, x, hx, b;
            hx = 0.2;
            x = 1;

            // b = 2
            // Console.WriteLine ("b = 2\tb = 4\t b = 6\tb = 8")
            while (x <= 2)
            {
                b = 2;
                while (b != 10)
                {
                    Console.Write("b = " + b);
                    z = Math.Sqrt((4 * b + Math.Pow(x, 2)) / 2);
                    y = Math.Pow(Math.E, x / 2) * Math.Pow(b, x) * (Math.Cos(z) + Math.Sin(z));
                    Console.WriteLine("\t\tx = {0:#.####} \nz = {1:#.####}\ty = {2:#.####}\n\n", x, z, y);
                    b += 2;

                }
                x += hx;
            }

        }
    }
}