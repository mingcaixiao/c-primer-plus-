#include<iostream>
using namespace std;
const int strsize=10;
struct bop{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};
int main()
{
    char ch;
    bop b[3]={{"Wimp","li","ffjf",0},{"dkfj","ldfjd","dkfjd",1},{"dfkd","dfk","dff",2}};
    cout<<"Benevolent Order of Programmers Report\n";
    cout<<"a.display by name\tb.display by title\nc.dispaly by bopname\td.displayby preference\nq.quit\n";
    cout<<"Enter your choice\n";
    while((ch=cin.get())!='q')
    {
        switch(ch)
        {
            case 'a':
            for(int i=0;i<3;i++)
            {
                cout<<b[i].fullname<<endl;
            }
            break;
            case 'b':
            for(int i=0;i<3;i++)
            {
                cout<<b[i].title<<endl;
            }
            break;
            case 'c':
            for(int i=0;i<3;i++)
            {
                cout<<b[i].bopname<<endl;
            }
            break;
            case 'd':
            for(int i=0;i<3;i++)
            {
                if(b[i].preference==0)
                cout<<b[i].fullname;
                else if(b[i].preference==1)
                cout<<b[i].title;
                else cout<<b[i].bopname;
            }
            break;
        }
    }
    return 0;
}