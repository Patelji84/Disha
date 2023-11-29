#include <iostream>
using namespace std;

int sum(int num1, int num2)
{
         return num1 + num2;
}

double sum(double num1, double num2)
{
         return num1 + num2;
}

int sum(int num1, int num2, int num3)
{
         return num1 + num2 + num3;
}

int main()
{
         cout << "SUM 1=" << sum(5, 6) << endl;
         cout << "SUM 2=" << sum(5.5, 6.7) << endl;
         cout << "SUM 3=" << sum(5, 6, 9) << endl;
         return 0;
}