#include <iostream>
//Вариант 16
using namespace std;

int main()
{
    cout << "Введите количество элементов в массиве: ";
    int arraylen;
    cin >> arraylen;
    int array[arraylen];
    //Заполним массив числами
    for (int i = 0; i < arraylen; i++)
    {
        cout << "Введите целое число: ";
        cin >> array[i];
    } //Задание 1: Количество нечётных элементов массива
    int amount_of_odd_numbers = 0;
    for (int i = 0; i < arraylen; i++)
    {
        if (array[i] % 2 != 0)
        {
            ++amount_of_odd_numbers;
        }
        else
        {
            continue;
        }
    }
    cout << "Количество нечётных чисел: " << amount_of_odd_numbers << endl;
    //Задание 2: Произведение чисел расположенных до минимума
    int minimum = array[0];
    int multiple_of_numbers = 1;
    for (int i = 0; i < arraylen; i++) //Нахождение минимума
    {
        if (array[i] < minimum)
        {
            minimum = array[i];
        }
        else
        {
            continue;
        }
    }
    for (int i = 0; i < arraylen; i++) //Нахождение произведения элементов до минимума
    {
        if (minimum == array[i])
        {
            if (i == 0)
            {
                multiple_of_numbers = 0; //Если минимальное число стоит на 0 позиции, то чисел до него нет => multiple_of_numbers = 0;
            }
            break;
        }
        multiple_of_numbers *= array[i];
    }
    cout << "Минимум: " << minimum << "\nПроизведение чисел до минимума: " << multiple_of_numbers << endl;
}