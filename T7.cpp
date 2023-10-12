#include <iostream>
using namespace std;
float payableAmount(string day,string month,float amount);
int main()
{
    string d,m;
    float x;
    cout<<"Enter Purchase Day: ";
    cin>>d;
    cout<<"Enter Purchase Month: ";
    cin>>m;
    cout<<"Enter Purchase Amount: ";
    cin>> x;
    float X=payableAmount(d,m,x);
    cout<<"Payable Amount after discount: "<<X;
}
float payableAmount(string day,string month,float amount)
{   float payable=amount;
    if (day=="Sunday"&& (month=="October" || month =="March"||month=="August"))
    {
        return payable=payable-payable*0.1;
    }
    else{
        return payable; 
    }
}