#include <iostream>
using namespace std;
bool parityAnalysis(int x);
int main()
{   int number;
    cout<<"Enter a 3-digit number: ";
    cin>>number;
    bool X=parityAnalysis(number);
    cout<<X;
}
bool parityAnalysis(int x)
{
    int hundreds = x / 100;
    int tens = (x / 10) % 10;
    int ones = x % 10;
    int sum=hundreds+tens+ones;
    if ((x % 2==0) && (sum % 2 ==0))
    {
        return true;
    }
    if ((x%2 !=0)&& (sum%2 != 0))
    {
        return true;
    }
    else 
    {
        return false;
    }

}
