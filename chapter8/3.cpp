#include<iostream>
#include<cctype>
#include<string>
using namespace std;
void toUpper(string &);
int main()
{
    char c;
    string s;
    string s1;
    cout<<"Enter a string (q to quit):";
    getline(cin,s);
    while(s!="q")
    {
        toUpper(s);
        cout<<"Next string (q to quit):";
        //cin.get();
        getline(cin,s);
    }
    cout<<"Bye.";
}
void toUpper(string &s)
{
    for(int i=0;i<s.length();i++)
        {
            if(islower(s[i]))
            {
                s[i]=toupper(s[i]);
            }
        }
    cout<<s<<endl;
}