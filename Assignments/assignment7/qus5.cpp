//Define a function to merge two shorted arrays of same size
#include<iostream>
using namespace std;
void merge(int merge[],int arr1[],int arr2[],int size1,int size2,int sizeMerge)
{
    int i;
    for(i=0;i<size1;i++)
    {
        merge[i]=arr1[i];
    }
    for(int j=0;i<sizeMerge&&j<size2;i++)
    {
        merge[i]=arr2[j];
        j++;
    }
}
int main()
{
    int arr1[]={1,2,3,4,5};
    int arr2[]={6,7,8,9,10};
    int mergeArray[10];
    merge(mergeArray,arr1,arr2,5,5,10);
    for(int i=0;i<10;i++)
    {
        cout<<mergeArray[i]<<", ";
    }
}