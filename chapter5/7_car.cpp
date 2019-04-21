#include<iostream>
#include<string>
using namespace std;
const int ArSize=20;
int main()
{
    struct Car
    {
        char make[ArSize];
        int year;
    };
    int n;
    cout<<"How many cars do you wish to catalog?";
    cin>>n;
    Car *p=new Car[n*sizeof(Car)];
    for(int i=0;i<n;i++)
    {
        cout<<"Car#:"<<i+1<<endl;
        cout<<"please enter the make:";
        cin.get();    //读取换行符
        cin.getline((p+i)->make,ArSize);
        cout<<"please enter the year made:";
        cin>>(p+i)->year;
    }
    cout<<"Here is your collection:"<<endl;
    for(int i=0;i<n;i++)
    {
      cout<<(p+i)->year<<" "<<(p+i)->make<<"\n";
      delete (p+i);
    }
    return 0;
}