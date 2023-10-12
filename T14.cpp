#include <iostream>
using namespace std;
string calculateCost (float budget ,string category,int numPeople);
int main()
{   float b;
    string c;
    int ppl;
    cout<<"Enter the budget: ";
    cin>>b;
    cout<<"Enter the category (VIP/Normal): ";
    cin>>c;
    cout<<"Enter the number of people in the group: ";
    cin>>ppl;
    string X=calculateCost (b,c,ppl);
    cout<<X;
}
string calculateCost (float budget ,string category,int numPeople)
{
    float vip_ticket_price=499.99;
    float normal_ticket_price=249.99;
    float transportation_cost;

    if (numPeople >= 1 && numPeople <= 4) {
        transportation_cost = budget * 0.75;
    } if (numPeople >= 5 && numPeople <= 9) {
        transportation_cost = budget * 0.60;
    } if (numPeople >= 10 && numPeople <= 24) {
        transportation_cost = budget * 0.50;
    } if (numPeople >= 25 && numPeople <= 49) {
        transportation_cost = budget * 0.40;
    } if (numPeople>50) {
        transportation_cost = budget * 0.25;
    }
    

    float total_ticket_cost;
    if (category == "VIP") {
        total_ticket_cost = numPeople * vip_ticket_price;
    }  if (category == "Normal") {
        total_ticket_cost = numPeople * normal_ticket_price;
    }
    
     float total_cost = total_ticket_cost + transportation_cost;
     if (budget >= total_cost) {
        float money_left = budget - total_cost;
        return "Yes! You have " + to_string(money_left) + " leva left.";
    } else {
        float money_needed = total_cost - budget;
        return "Not enough money! You need " + to_string(money_needed) + " leva.";
    }
}
