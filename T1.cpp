#include <iostream>
using namespace std;
bool greaterNumber(int x,int y);
int main()
{
    int num1,num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    bool result=greaterNumber(num1,num2);
    cout<<result;
}
bool greaterNumber(int x,int y)
{
if (x>y)
{
    return true;
}
else 
{
    return false;
}
}