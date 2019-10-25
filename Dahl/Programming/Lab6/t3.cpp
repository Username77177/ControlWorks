#include <iostream>

using namespace std;

int main()
{
    srand(time(NULL));
    //Задание 3: Дан двумерный массив размером 7х7, заполняется случайными элементами. Найти наименьшее из значений элементов, расположенных в местах, где находятся нули так, как показано на рисунке
    int matrice3[7][7];
    //Заполнение случайными числами
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            matrice3[i][j] = rand() % 100;
        }
    }
    //Цикл который будет искать числа вне равнобедренного треугольника, который построен внизу матрицы
    int minimal_num = matrice3[5][0];
    for (int i = 6; i >= 0; i--)
    {
        switch (i)
        {
        case 6:
            if (matrice3[i][0] < minimal_num)
                minimal_num = matrice3[i][0];
            else if (matrice3[i][-1] < minimal_num)
                minimal_num = matrice3[i][-1];
            break;
        case 5:
            if (matrice3[i][0] < minimal_num)
                minimal_num = matrice3[i][0];
            else if (matrice3[i][-1] < minimal_num)
                minimal_num = matrice3[i][-1];
            else if (matrice3[i][1] < minimal_num)
                minimal_num = matrice3[i][1];
            else if (matrice3[i][-1] < minimal_num)
                minimal_num = matrice3[i][-2];
            break;
        case 4:
            for (int k = 0; k < 7; k++)
            {
                if (k == 4)
                    continue;
                if (matrice3[i][k] < minimal_num)
                    minimal_num = matrice3[i][k];
            }

        default:
            for (int k = 0; k < 7; k++)
            {
                if (matrice3[i][k] < minimal_num)
                {
                    minimal_num = matrice3[i][k];
                }
            }
            break;
        }
    }
    cout << "Наименьшее число в этом массиве: " << minimal_num << "\n";
}