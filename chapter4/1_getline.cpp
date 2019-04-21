#include<iostream>
#include<string>
using namespace std;
int main()
{
    char name[20];
    string Last_name;
    char grade;
    int age;
    cout<<"what is your first name? ";
    cin.getline(name,20);
    cout<<"What is your last name? ";
    cin>>Last_name;
    cout<<"What letter grade do you deserve? ";
    cin>>grade;
    cout<<"What is your age? ";
    cin>>age;
    cout<<"Name:"<<Last_name<<" "<<name<<endl;
    cout<<"Grade:"<<char(grade+1)<<endl;
    cout<<"Age:"<<age<<endl;
}