#include<iostream>
using namespace std;
void printc(const char *,int n=1);
int main()
{
    char a[]={"35kjdfkdjf"};
    printc(a);
    printc(a,3);
    return 0;
}
void printc(const char *p,int n)
{
    if(n<=0)
    cout<<"wrong enter!"<<endl;
    else
    {
        while(n--)
        {
            cout<<p;
        }
    }
}