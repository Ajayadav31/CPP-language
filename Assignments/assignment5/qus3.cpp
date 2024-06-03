//Define overloaded function to calculate area of circle,area of rectangle and area of triangle
#include<iostream>
#include<math.h>
using namespace std;
float area(float rad)
{
    return 3.14*rad*rad;
}
int area(int l,int b)
{
    return l*b;
}
float area(float l,float b,float h)
{
    float s=(l+b+h)*0.5;
    return sqrt(s*(s-l)*(s-b)*(s-h));
}
int main()
{
    cout<<area(5)<<endl;
    cout<<area(5,10)<<endl;
    cout<<area(2.5,0.5,2.0);
    return 0;
}