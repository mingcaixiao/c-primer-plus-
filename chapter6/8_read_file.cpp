#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream inFile;
    int count=0;
    inFile.open("a.txt");
    if(!inFile.is_open())
    {
        exit(EXIT_FAILURE);
    }
    char ch;
    inFile>>ch;
    while(inFile.good())
    {
        count++;
        inFile>>ch;
    }
    cout<<"the a.txt's characters hava "<<count<<endl;
    return 0;
}