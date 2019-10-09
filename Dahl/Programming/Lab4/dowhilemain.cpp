#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double y[12];
    double a = 2.2, b = 0.3, deltai = 0.5, i = 1; // i [1;6]
    int index = 0;
    do
    {
        //Ariphmetic
        if (i < 4)
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
        ++index;
        i += 0.5;
    }while (i <= 6);


    index = 0;
    i = 1;
    while (true) //Если умею, то почему бы и нет?
    {
        cout << "i = " << i << "\t y = " << y[index] << endl;
        i += 0.5;
        index++;
        if (i > 6)
        {
            break;
        }
    }
}