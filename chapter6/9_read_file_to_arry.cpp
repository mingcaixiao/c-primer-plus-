#include<iostream>
#include<string>
#include<fstream>
using namespace std;
struct donator
{
    string name;
    double money;
};
int main()
{
    int num;
    ifstream inFile;
    inFile.open("b.txt");
    if(!inFile.is_open())
    {
        exit(EXIT_FAILURE);
    }
    inFile>>num;
    donator *p=new donator[num];
    for(int i=0;i<num;i++)
    {
        inFile.get();
        getline(inFile,(p+i)->name);
        inFile>>(p+i)->money;
        cout<<(p+i)->name<<endl;
        cout<<(p+i)->money<<endl;
    }
    cout << "Grand Patrons:" << endl;
    for (int i = 0;i<num;i++)
    {
        if(p[i].money>=10000)
        {
            cout << p[i].name << " " << p[i].money << endl;
        }
    }
    cout << "Patrons:\n";
    for (int i = 0;i<num;i++)
    {
        if(p[i].money<10000)
        {
            cout << p[i].name << " " << p[i].money << endl;
        }
    }
    return 0;
}