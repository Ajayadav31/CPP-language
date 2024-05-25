//write a c program to calculate factorial of a number
#include<stdio.h>
int main()
{
    int a,fact=1;
    printf("Enter a number : ");
    scanf("%d",&a);
    for(int i=a;i>0;i--)
    {
        fact=fact*i;
    }
    printf("Factorial is : %d",fact);
    return 0;
}