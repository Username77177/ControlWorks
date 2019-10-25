#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{

    //Задание 1: В матрице X(5×5) определите произведение положительных элементов главной диагонали.

    double matrice[5][5]; //Матрица
    srand(time(NULL));    //Указывает время от которого создаются "случайные" числа

    for (int i = 0; i < 5; i++) //Заполнение матрицы
    {
        for (int j = 0; j < 5; j++)
        {
            matrice[i][j] = rand() % 100;
        }
    }
    //Главная диагональ - элементы с повторяющимся индексом (в квадратной матрице)
    cout << "Вывод диагонали матрицы: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << string(i, '\t') << matrice[i][i] << endl; //string(int, char) - вставляет символы n-ное количество раз
    }

    //Задание 2: Дан двумерный массив из пятнадцати строк и двух столбцов. Найти номера двух соседних строк, сумма элементов в которых минимальна.
    int matrice2[15][2];
    for (int i = 0; i < 15; i++)
    {
        for (int k = 0; k < 2; k++)
        {
            matrice2[i][k] = rand() % 100;
        }
    }

    double minimal_sum = sqrt(pow(matrice2[0][0] + matrice2[0][1], 2) + pow(matrice2[1][0] + matrice2[1][1], 2)); //Сумма длин векторов первых двух строк
    int numberofstring[2];
    for (int i = 1; i < 15; i++)
    {
        int sum[2] = {matrice2[i][0] + matrice2[i][1], matrice2[i - 1][0] + matrice2[i - 1][1]}; //Сумма данной строки и предыдущей (начинаем со 2 строки)
        double absofvec = sqrt(pow(sum[0], 2) + pow(sum[1], 2));
        if (absofvec < minimal_sum)
        {
            minimal_sum = absofvec;
            int numberofstring[2] = {i - 1, i};
        }
    }
    cout << "Сумма длин векторов двух соседних строк: " << minimal_sum << "\n";
    cout << "Номера соседних строк с минимальным абсолютным значением суммы: " << numberofstring[0] << "," << numberofstring[1] << endl;
}