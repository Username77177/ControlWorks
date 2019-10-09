#include <iostream>
#include <math.h>
//Вариант 16
using namespace std;


int main()
{
    double y[12]; //Массив со значениями
    double a = 2.2, b = 0.3, deltai = 0.5, i = 1; // i [1;6] Число a,b, шаг аргумента функции, начальное значение аргумента
    for (int index = 0; index <= 11; index++)
    {
        //Ariphmetic
        if (i < 4) //Условие по заданию
        {
            y[index] = a * pow(i, 2) + b * i;
        }
        else if (i == 4)
        {
            y[index] = pow(i, 2) + 0.5 * i;
        }
        else
        {
            y[index] = sqrt(abs(a * i + i));
        }
        i += deltai; //Выполняется шаг аргумента (0.5)
        cout << "i = " << i << "\t y = " << y[index] << endl; //Выводит i, затем через таб значение функции, при данном аргументе
    }
    
}
