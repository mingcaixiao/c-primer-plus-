#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    const int ArrSize=20;
    char words[ArrSize];
    cin>>words;
    int count=0;
    while(strcmp(words,"Done"))
    {
        cin>>words;
        count++;
    }
    cout<<"You entered a total of "<<count<<" words."<<endl;
    return 0;
}