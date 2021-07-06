#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    const int  n = 11;
    const double sumX = 55, sqrtX = 385;
    double x[n]{ 0,1,2,3,4,5,6,7,8,9,10 }, y[n], xy[n], sumY = 0, sumXY = 0;
    double a, b, pog = 0;
    setlocale(LC_ALL, "RUS");
    for (int i = 0; i < n; i++) 
    {
        cout << "Введите Yi " << i + 1 << " : ";
        cin >> y[i];
        xy[i] = x[i] * y[i];
        sumY = sumY + y[i];
        sumXY = sumXY + xy[i];

    }
    cout << endl << "Сумма Yi: " << sumY;
    cout << endl << "Сумма Xi * Yi: " << sumXY;
    a = ((n * sumXY) - (sumX * sumY)) / (n * sqrtX - pow( sumX, 2));
    cout << endl << "Переменная a: " << a;
    b = (sumY - a * sumX) / n;
    cout << endl << "Переменная b: " << b;
    cout << endl << "Y: " << a << "x + " << b;
    for (int i = 0; i < n; i++) 
    {
        pog = pog + pow((y[i] - (a * x[i] + b)), 2);
    }
    cout << endl << "Погрешность: " << pog <<endl;
    system("pause");
}