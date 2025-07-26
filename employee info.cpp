#include<iostream>
#include<cmath>
#include<string>
using namespace std;

class emp
{
    public:

    string name;
    long id;
    long long number;
    string department;
    string address;
    float salary;
    float tax;

    void aftertax(float salary)
    {
        cout<<"your after tax salary: "<<salary-salary*tax/100;
    }
};

int main()
{   emp x1;
    cout<<"enter your name: "<<endl;
    getline(cin, x1.name);
    cout<<"id: "<<endl;
    cin>> x1.id;
    cout<<"phone number: "<<endl;
    cin>> x1.number;
    cin.ignore();
    cout<<"which department are you working in?(one word only)"<<endl;
    cin>> x1.department;
    cin.ignore();
    cout<<"what's your address?"<<endl;
    getline(cin,x1.address);
    cout<<"salary: "<<endl;
    cin>> x1.salary;
    cout<<"tax: "<<endl;
    cin>> x1.tax;

    cout<<"employee information: "<<endl;
    cout<<"name: "<< x1.name<<endl;
    cout<<"id: "<< x1.id<<endl;
    cout<<"phone no.: "<< x1.number<<endl;
    cout<<"department: "<< x1.department<<endl;
    cout<<"address:  "<< x1.address<<endl;
    cout<<"salary: "<< x1.salary<<endl;

  x1.aftertax( x1.salary);


    return 0;

}
