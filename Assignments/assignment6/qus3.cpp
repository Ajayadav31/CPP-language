//define a function to rotate an array by n positions in the d direction. implement position and direction using default argument. Argument d can be -1 or 1 denoting left or right direction. Argument n should be the last argument with default value 1.
#include<iostream>
#include<string.h>
using namespace std;
void rotate(int arr[],int size,int n=1,int d=1 )
{
    int temp,i,j;
    if(d==1)
    {
        for(j=0;j<n;j++)
        {
            temp=arr[size-1];
            for(i=size-1;i>0;i--)
                arr[i]=arr[i-1];
            arr[0]=temp;
        }
    }
    if(d==-1)
    {
        for(j=0;j<n;j++)
        {
            temp=arr[0];
            for(i=0;i<size-1;i++)
                arr[i]=arr[i+1];
            arr[size-1]=temp;
        }
    }
 
}
int main()
{
    int arr[]={1,2,3,4,5};
    rotate(arr,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}