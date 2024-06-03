//write functio overloading to find a maximum of two numbers and both the numbers can be integres or real
#include<iostream>
using namespace std;
int max(int a,int b)
{
    if(a>b)
        return a;
    else 
        return b;
}
double max(double a,double b)
{
    if(a>b)
        return a;
    else 
        return b;
}
int main()
{
    cout<<max(2,10)<<endl;
    cout<<max(10.0,12.0);
}