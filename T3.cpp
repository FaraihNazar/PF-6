#include <iostream>
using namespace std;
float perimeter (string letter,float num);
int main()
{   string shape;
    float value;
    cout<<"Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
    cin>>shape;
    cout<<"Enter the value: ";
    cin>>value;
   float X= perimeter (shape, value);
   cout<<"The perimeter is: "<<X;
}
float perimeter (string letter,float num)
{
 if ( letter=="s")
 {
    return num*4;
 }
 if (letter=="c")
 {
    return 6.28 *num;
 }
 if (letter=="t")
 {
    return 3*num;
 }
 if (letter =="h")
 {
    return 6*num;
 }
}