#include <iostream>
using namespace std;
float lowestPrice(int km,string time_of_day);
int main()
{
    int  distance;
    string time;
    cout<<"Enter the number of kilometers: ";
    cin>>distance;
    cout<<"Enter the period of the day (day/night): ";
    cin>>time;
    float X=lowestPrice(distance,time);
    cout<<"Lowest price for "<<distance<<" kilometers: "<<X<<" EUR ";

}
float lowestPrice(int km,string time_of_day)
{   float price;
    if (km<20)
    {
        if (time_of_day=="day"){
           price= (km*0.79)+0.70; 
        }
        else{
            price= (km*0.90)+0.70;
        }
    }
    if (km>=20){
        { if (time_of_day=="day" || time_of_day=="night")
           price= km*0.09;
        }
    }
    if  (km>=100){ if (time_of_day=="day" || time_of_day=="night")
        price= km*0.06;
    }
    return price;
}
