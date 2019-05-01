#include<iostream>
#include<cstring>
using namespace std;
struct CandyBar{
    char name[10];
    double weight;
    int height;
};
void show(CandyBar &c)
{
    cout<<c.name<<" "<<c.weight<<" "<<c.height;
}
void setvalue(CandyBar &c,const char *n={"Millennium Much"},const double a=2.85,const int h=350);
int main()
{
    CandyBar c;
    setvalue(c);
    show(c);
    setvalue(c,"dfjkdj",4.55,678);
    show(c);
    return 0;
}
void setvalue(CandyBar &c,const char *n,const double a,const int h)
{
    strcpy(c.name,n);
    c.weight=a;
    c.height=h;
}