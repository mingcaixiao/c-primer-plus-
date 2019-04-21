#include<iostream>
#include<array>
using namespace std;
const int ArraySize=10;
int main()
{
    double total=0,average;
    int count;
    array<double,ArraySize>a1;
    for(int i=0;i<ArraySize;i++)
    {
        cin>>a1[i];
        total+=a1[i];
    }
    average=total/ArraySize;
    for(int i=0;i<ArraySize;i++)
    {
        if(a1[i]>average)
        count++;
    }
    cout<<"the average is:"<<average<<endl;
    cout<<"there is "<<count<<" numbers bigger than average\n";
    return 0;
}