//Define a function to swap two arrays
#include<iostream>
#include<string.h>
using namespace std;
void swapArray(int arr1[],int arr2[],int size)
{
    int temp[size];
    int i;
    for(i=0;i<size;i++)
    {
        temp[i]=arr1[i];
    }
    for(i=0;i<size;i++)
    {
        arr1[i]=arr2[i];
    }
    for(i=0;i<size;i++)
    {
        arr2[i]=temp[i];
    }
}
int main()
{
    int str1[]={1,2,3,4,5};
    int str2[]={6,7,8,9,10};
    swapArray(str1,str2,5);
    int i;
    for(i=0;i<5;i++)
    {
        cout<<str1[i]<<",";
    }
    cout<<endl;
    for(i=0;i<5;i++)
    {
        cout<<str2[i]<<",";
    }
}