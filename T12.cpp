#include <iostream>
using namespace std;
float totalIncome(string type,int rows,int columns);
int main()
{    string type_of_ticket;
     int r,c;
    cout<<"Enter the screening type (Premiere/Normal/Discount): ";
    cin>>type_of_ticket;
    cout<<"Enter the number of rows: ";
    cin>>r;
    cout<<"Enter the number of columns: ";
    cin>>c;
    float X=totalIncome(type_of_ticket,r,c);
    cout<<X;
}
float totalIncome(string type,int rows,int columns)
{
    if (type=="Premiere")
    {
        return rows*columns*12.00;
    }
    if (type=="Normal")
    {
        return rows*columns*7.50;
    }
    if (type=="Discount")
    {
        return rows*columns*5.00;
    }
}