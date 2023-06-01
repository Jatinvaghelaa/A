// WAP To Member Details using <ultiple inheritance

#include<iostream>
using namespace std; 
class members 
{
    public:
        char name[50]; //  Store Character Value
        int age; // //  For Store integer Value
        members()
        {
            // Pass The MSg TO Take User Input
            cout<<"Enter Members Name : ";
            cin>>name;
            cout<<"Enter Members their Age : ";
            cin>>age;    
        }
};

class persantage // Derived Class
{
    public:
        int per, sal, marks, sub;
        persantage()
        {   
               cout<<"Enter your Total Marks : ";
               cin>>marks;
               cout<<"Enter  your Total Subjects : ";
               cin>>sub;
               per = marks / sub; 
               cout<<"Enter your  Member Salary : ";
               cin>>sal;   
        }
};

class read : public members, public persantage
{
    public:
        read()
        {           
                cout<<"\nmembers name is "<<name;
                cout<<"\nMembers Age is "<<age;
                cout<<"\nStudent persantage is "<<per;
                cout<<"\nMembers Salary : "<<sal;   
        }
};

int main() // Main Functiion
{
    read r8;
    return 0;
}
