#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double x[11];
    double a = 2.2, b = 0.3;
    for (double i = 1; i < 6.5; i += 0.5)
    {
        for (int j = 0; j <= 11; j++)
        {

            if (i < 4)
            {
                x[j] = a * pow(i, 2) + b * i;
                // i = [1;6]
            }

            else if (i == 4)
            {
                x[j] = pow(i,2) + 0.5 * i;
            }

            else
            {
                sqrt(abs(i*(a+1)));
            }
            
        }
    }
    for (int i = 0; i <= 11; i++)
    {
        cout<<x[i];
    }
    
}