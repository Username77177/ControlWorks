#include <iostream>
#include <cmath>

using namespace std;

int main() {
    //Задание 1: Найдите площадь треугольника с помощью формулы Герона
    int a,b,c;
    cout<<"Введите три стороны: \n";
    cin>>a;
    cin>>b;
    cin>>c;
    double p = (a+b+c)/2;
    double geron = sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<"Площадь = "<<geron<<endl;

    //Задание 2
    //найти y = cos(2x) +sec(2x)
    int x;
    cout<<"x = ";
    cin >> x;
    double y;
    y = tan(2*x) + 1/cos(2*x);
    cout<<"y = "<<y<<endl;

    //Задание 3
    //Вывести сумму квадратов цифр двузначного числа
    int doublenum;
    cout << "Введите двузначное число: ";
    cin >> doublenum;
    int fn = doublenum / 10;
    int sn = doublenum % 10;
    cout<<"Первая цифра: "<< fn <<endl;
    cout<<"Вторая цифра:"<< sn <<endl;
    cout<<"Сумма квадратов цифр: "<< pow(fn,2) + pow(sn,2)<<"\n";
}
