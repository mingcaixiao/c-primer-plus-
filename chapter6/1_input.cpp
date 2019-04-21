#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    char c;
    while((c=cin.get())!='@')
    {
        if(isalpha(c))
        {
            if(islower(c))
            {
                cout<<char(toupper(c))<<" ";
            }
            else
            {
                cout<<char(tolower(c))<<" ";
            }
            
        }
    }
    return 0;
}