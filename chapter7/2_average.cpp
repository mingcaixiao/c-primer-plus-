#include<iostream>
using namespace std;
int main()
{
    int getvalue(int *);
    void show(int *,int);
    float average(int *,int);
    int a[10];
    int n=getvalue(a);
    show(a,n);
    cout << "the average is:" << average(a,n) << endl;
}

int getvalue(int *a)
{
    int b,i=0,count=0;
    cout << "enter score end with 0:" << endl;
    cin >> b;
    while(b!=0)
    {
        a[i++] = b;
        count++;
        cin >> b;
    }
    return count;
}

void show(int *a,int n)
{
    for (int i = 0;i<n;i++)
    {
        cout << a[i] << " ";
    }
    cout <<endl;
}

float average(int *a,int n)
{
    int sum=0;
    for (int i = 0; i < n;i++)
    {
        sum += a[i];
    }
    return sum / n;
}