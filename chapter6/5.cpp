#include<iostream>
using namespace std;
int main()
{
    float wages,tax;
    cout<<"Please enter wages:\n";
    while(cin>>wages)
    {
        if(wages<=5000)
        tax=0;
        else if(wages<=15000)
        tax=wages*0.1;
        else if(wages<=35000)
        tax=wages*0.15;
        else 
        tax=wages*0.20;
        cout<<"tax:"<<tax<<"\n";
    }
    return 0;
}