#include <iostream>
#include <math.h>
using namespace std;

int main()
{
int num1, num2;

cout << "Введите первое число: ";
cin >> num1;

cout << "Введите второе число: ";
cin >> num2;

int res = (6 - abs(num1 - 3 * num2)) / sqrt(5 - pow(num2, 2));
int res2 = pow(25 * num1 * (2 * pow(num2, 2) + 9), 1/3.0);

cout << "1) Результат 1-ого выражения: " << res << endl;
cout << "2) Результат 2-ого выражения: " << res2 << endl;
cout << "press enter to exit";
cin.get();

return 0;
}