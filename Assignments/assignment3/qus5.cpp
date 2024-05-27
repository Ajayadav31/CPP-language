//Write a c++ program to add all the numbers of an array of size 10
#include<iostream>
using namespace std;
int main()
{
   int i,sum=0;
   int arr[10];
   for(i=0;i<10;i++)
   {
        cout<<"Enter element no "<<i+1<<" : ";
        cin>>arr[i];
        sum=sum+arr[i];
   }
    cout<<"Sum of all elements of an array is : "<<sum;
    return 0;
}