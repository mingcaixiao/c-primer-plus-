#include<iostream>
#include<cstring>
#include<string>
using namespace std;
#define size 100;
template<typename T>
T max(T[],int);
// explicit specialization
template<>char * max(char *p[],int);
int main()
{
    double a[4]={4.5,6.5,7.5,8.5};
    int b[6]={1,2,3,4,5,6};
    char *p[5]={"dfjkdf","kfjd","djfdk","djfkd","dfjkdj"};
    cout<<max(a,4)<<endl;
    cout<<max(b,6)<<endl;
    cout<<max(p,5)<<endl;
}

template<typename T>
T max(T a[],int n)
{
    T maxn=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>maxn)maxn=a[i];
    }
    return maxn;
}
template<>char * max(char *p[],int n)
{
    char *maxn=p[0];
    for(int i=0;i<n;i++)
    {
        if(strlen(p[i])>strlen(maxn))maxn=p[i];
    }
    return maxn;
}
