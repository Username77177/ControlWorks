#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    setlocale(0, "Rus"); //Локализация
    //Задание 1
    double y; //Переменная с плавающей точкой (число)
    int x;
    cout << "Введите x: ";
    cin >> x;    //Ввод числа юзером
    if (x < 100) //Если
    {
        y = sqrt(x + 2.2);
    }
    else if (100 <= x <= 200) // В остальном если
    {
        y = 3.5 * x;
    }
    else // В остальном
    {
        y = pow(x, 3) - 0.7 * x;
    }

    cout << "Ваш y = " << y << endl;

    //Задание 2

    //Можно сделать с помощью switch, но с if, elif, else будет короче
    cout << "Введите порядковый номер месяца:\n1.Январь\n2.Февраль\n3.Март\n4.Апрель\n5.Май\n6.Июнь\n7.Июль\n8.Август\n9.Cентябрь\n10.Октябрь\n11.Ноябрь\n12.Декабрь\n (Месяц) --- ";
    cin >> x;
    if (x % 2 != 0 and x < 8 or x >= 8 and x % 2 == 0)
        {
            cout << "В вашем месяце 31 день\n";
        }
    else if (x == 2)
    {
        cout << "В вашем месяце 28/29 дней\n";
    }
    else
    {
        cout << "В вашем месяце 30 дней\n";
    }
    

    return 0;
}