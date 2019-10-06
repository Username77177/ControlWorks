using System;
using System.Collections.Generic;

namespace ControlWork1
{
    class Control1Part2
    {
        static void Main(string[] args)
        {
            int[] newintegerarray = new int[14];
            int i = 0;

            while (i < 14)
            {
                Console.WriteLine("Введите значение ("+ (i+1) + ") :");
                newintegerarray[i] = Convert.ToInt32(Console.ReadLine());
                i++;
            }

            List<int> succesfulint = new List<int>();
            List<int> succesfulintsorted = new List<int>();

            //Сложение
            for (int k = 0; k < 14; k++){
                int fn = newintegerarray[k];
                for (int j = 0; j < 14; j++)
                {
                    int sn = newintegerarray[j];
                    int sum = fn + sn;
                    if (sum % 3 == 0)
                    {
                        if (sum % 5 != 0)
                        {
                            succesfulint.Add(sum);
                        }
                    }
                }
            }
            
            foreach (int item in succesfulint)
            {
                if (succesfulint.Contains(item) == false)
                {
                    succesfulintsorted.Add(item);
                    Console.WriteLine(item);
                }
            }
        }
    }
}