#include<iostream>
using namespace std;
double add(double a,double b)
{
    return a + b;
}

double calculate(double a,double b,double (*pa)(double,double))
{
    return (*pa)(a,b);
}
int main()
{
    double a, b;
    a = 10;
    b = 10;
    cout<<"a+b="<<calculate(a,b,add);
    return 0;
}