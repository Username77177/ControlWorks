#include <iostream>
#include <math.h>
using namespace std;
//! Свой вариант влепи сюда
//sqrt() - корень, pow() - степень
int main()
{
    int changemode;
    cout << "Выберите цикл: 1 - while, 2 - for, 3 - do while" << endl; //Вывод текста<<"Текст"<<endl(конец строки);
    cin >> changemode;                                                 //Ввод текста >> переменная, в которую вводите текст
    if (changemode == 1)
    {

        double y[12]; //Массив чисел. Можно сказать контейнер для переменных, брать оттуда можно с помощью индекса [цифра].
                      //Счёт начинается с 0
        double a = 2.2, b = 0.3, deltai = 0.5, i = 1; //!Подставляй сюда значения a, b, дельта, начальное значение аргумента функции
        int index = 0;
        while (i <= 6) //!
        {
            //! y[index] не трогай
            if (i < 4)
            {
                y[index] = a * pow(i, 2) + b * i; //! ЗАМЕНИ НА СВОЁ УРАВНЕНИЕ И В УСЛОВИЕ НЕ ЗАБУДЬ ЗАСУНУТЬ ЦИФРУ 
            }
            else if (i == 4)
            {
                y[index] = pow(i, 2) + 0.5 * i; //! ЗАМЕНИ НА СВОЁ УРАВНЕНИЕ И В УСЛОВИЕ НЕ ЗАБУДЬ ЗАСУНУТЬ ЦИФРУ
            }
            else
            {
                y[index] = sqrt(abs(a * i + i)); //! ЗАМЕНИ НА СВОЁ УРАВНЕНИЕ
            }
            ++index;
            i += deltai;
        }

        index = 0;
        i = 1; //!Начальное значение аргумента функции
        while (true) //Если умею, то почему бы и нет?
        {
            cout << "i = " << i << "\t y = " << y[index] << endl;
            i += deltai;
            index++;
            if (i > 6) //!Конечное значение аргумента функции
            {
                break;
            }
        }
    }

    else if (changemode == 2)
    {
        double y[12];                                 //Массив со значениями (12 ячеек всего)
        double a = 2.2, b = 0.3, deltai = 0.5, i = 1; //! i [1;6] Число a,b, шаг аргумента функции, начальное значение аргумента
        for (int index = 0; index <= 11; index++)     // Инициализация переменной; условие по которому цикл выполняется; инкремент/декремент
        {
            //Ariphmetic
            if (i < 4) //! Условие по заданию
            {
                y[index] = a * pow(i, 2) + b * i; //! ЗАМЕНИ НА СВОЁ УРАВНЕНИЕ И В УСЛОВИЕ НЕ ЗАБУДЬ ЗАСУНУТЬ ЦИФРУ
            }
            else if (i == 4)
            {
                y[index] = pow(i, 2) + 0.5 * i; //! ЗАМЕНИ НА СВОЁ УРАВНЕНИЕ И В УСЛОВИЕ НЕ ЗАБУДЬ ЗАСУНУТЬ ЦИФРУ
            }
            else
            {
                y[index] = sqrt(abs(a * i + i)); //! ЗАМЕНИ НА СВОЁ УРАВНЕНИЕ
            }
            i += deltai;                                          //Выполняется шаг аргумента (0.5)
            cout << "i = " << i << "\t y = " << y[index] << endl; //Выводит i, затем через таб значение функции, при данном аргументе
        }
    }
    
    else
    {
        double y[12];
        double a = 2.2, b = 0.3, deltai = 0.5, i = 1; //!Подставляй сюда значения a, b, дельта, начальное значение аргумента функции
        int index = 0;
        do
        {
            //Ariphmetic
            if (i < 4) //!Своё условие
            {
                y[index] = a * pow(i, 2) + b * i; //! ЗАМЕНИ НА СВОЁ УРАВНЕНИЕ И В УСЛОВИЕ НЕ ЗАБУДЬ ЗАСУНУТЬ ЦИФРУ
            }
            else if (i == 4)
            {
                y[index] = pow(i, 2) + 0.5 * i; //! ЗАМЕНИ НА СВОЁ УРАВНЕНИЕ И В УСЛОВИЕ НЕ ЗАБУДЬ ЗАСУНУТЬ ЦИФРУ
            }
            else
            {
                y[index] = sqrt(abs(a * i + i)); //! ЗАМЕНИ НА СВОЁ УРАВНЕНИЕ
            }
            cout << "i = " << i << "\t y = " << y[index] << endl;
            ++index;
            i += deltai;
        } while (i <= 6);
    }
    
}