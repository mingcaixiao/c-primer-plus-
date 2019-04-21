#include<iostream>
#include<string>
using namespace std;
int main()
{
    string words;
    cin>>words;
    int count=0;
    while(words!="Done")
    {
        cin>>words;
        count++;
    }
    cout<<"You entered a total of "<<count<<" words."<<endl;
    return 0;
}