//Define a c++ function to swap data of two int variables using call by reference
#include<iostream>
using namespace std;
void swap(int &,int &);
int main()
{
    int x=3,y=4;
    cout<<"Before swapping a="<<x<<" b="<<y<<endl;
    swap(x,y);
    cout<<"after swapping a="<<x<<" b="<<y;
    return 0;
}
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}