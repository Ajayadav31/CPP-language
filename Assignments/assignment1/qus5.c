//write a c fuvction to check whether a given no is a prime or not(TSRS)
#include<stdio.h>
int prime(int x)
{
    int i;
    if(x<2)
        return 0;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int a,find;
    printf("Enter a number : ");
    scanf("%d",&a);
    find=prime(a);
    if(find==1)
        printf("Prime no");
    else 
        printf("Not a prime no ");
    return 0;
}