//Write a c++ program to find maximum of two number
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two number : ";
    cin>>a>>b;
    if(a>b)
        cout<<a<<" is graeter than "<<b<<endl;
    else
        cout<<b<<" is graeter than "<<a<<endl;
    return 0;
}