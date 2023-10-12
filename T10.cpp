#include <iostream>
using namespace std;
bool areSameNumber(int num1,int num2,int num3);
int main()
{   int x,y,z;
    cout<<"Enter the first number: ";
    cin>>x;
    cout<<"Enter the second number: ";
    cin>>y;
    cout<<"Enter the third number: ";
    cin>>z;
     bool X=areSameNumber(x,y,z);
     cout<<X;


}
bool areSameNumber(int num1,int num2,int num3)
{
   if ((num1==num2) &&(num2==num3) && (num1==num3))
    {
          return true;
    }

  else
{
    return false;
}
}