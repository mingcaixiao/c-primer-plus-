#include<iostream>
using namespace std;
int main()
{
    cout<<"Please enter one of the following choices:\n";
    cout<<"c) carnivore\tp) pianist\nt) tree\tg) game\n";
    char ch;
    cin>>ch;
    int flag;
    while(1)
    {
        switch(ch)
        {
            case 'c':cout<<"A maple is a carnivore.\n";flag=1;break;
            case 'p':cout<<"A maple is a pianist.\n";flag=1;break;
            case 't':cout<<"A maple is a tree.\n";flag=1;break;
            case 'g':cout<<"A maple is a game.\n";flag=1;break;
            default:cout<<"Please enter a c,p,t,or g:";
            cin>>ch;
        }
        if(1==flag)break;
    }
    return 0;
}