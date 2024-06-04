//Define a c++ functionto sort an array of integres in ascending or descending order depending on bool type argument(true for ascending and false for desecending). use default argument to implement it.
#include<iostream>
#include<string.h>
using namespace std;
void sort(int arr[],bool asc=true)
{
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(asc==true&&arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            else if(asc==false&&arr[i]<arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

int main()
{
    bool a;
    int arr[5]={1,2,3,4,5};
    sort(arr);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}