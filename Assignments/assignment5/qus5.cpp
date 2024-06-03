//Write functions using function overloading to add two numbers having different data types
#include<iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
float add(float a,float b)
{
    return a+b;
}
int main()
{
    cout<<add(1,2)<<endl;
    cout<<add(1.0f,2.5f);
    return 0;
}