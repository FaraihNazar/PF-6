#include <iostream>
using namespace std;
int findGreatest (int num1,int num2,int num3);
int main()
{   int x,y,z;
    cout<<"Enter the first number: ";
    cin>>x;
    cout<<"Enter the second number: ";
    cin>>y;
    cout<<"Enter the third number: ";
    cin>>z;
    int X= findGreatest (x,y,z);
    cout<<"The greatest number among "<<x<<", "<<y<<", and "<<z<<" is: "<<X;
}
int findGreatest (int num1,int num2,int num3)
{
    if (num1>=num2)
    {
        if (num1>=num3)
        {
            return num1;
        }
    }
    if (num2>=num3)
    {
        if (num2>=num1)
        {
            return num2;
        }
    }
    if (num3>=num1)
    {
        if (num3>=num2)
        {
            return num3;
        }
    }
}
