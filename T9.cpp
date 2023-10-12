#include <iostream>
using namespace std;
string checkTitle( int age ,char gender);
int main()
{    int a;
    char g;
    cout<<"Enter your age: ";
    cin>>a;
    cout<<"Enter your gender (m/f): ";
    cin>>g;
    string X=checkTitle(a,g);
    cout<<"Your personal title is: "<<X;
}
string checkTitle( int age ,char gender)
{   string result;
    if (age<16 && gender=='f')
    {
    result= "Miss";
    }
    if (age >=16 && gender=='f')
    {
        result="Ms.";
    }
     if (age >=16 && gender=='m')
    {
        result="Mr.";
    }
    if (age<16 && gender=='m')
    {
    result= "Master";
    }
    return result;
}