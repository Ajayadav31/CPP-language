//Write a c++ program to swap value of two int variable without using third variable
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two number : ";
    cin>>a>>b;
    cout<<"BEfore swapping a is "<<a<<" b is "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swapping a is "<<a<<" b is "<<b;
    return 0;
}