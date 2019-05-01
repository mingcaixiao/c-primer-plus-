#include<iostream>
using namespace std;
template <typename T>
void max5(T a[]);
int main()
{
    double a[5]={1.0,2.0,3.0,4.0,5.0};
    int b[5]={1,2,3,4,5};
    max5(a);
    max5(b);
    return 0;
}

template <typename T>
void max5(T a[])
{
    T max=a[0];
    for(int i=0;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    cout<<"max is:"<<max<<endl;
}
