//write a c program to calculate factorial of a number
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two number : ");
    scanf("%d %d",&a,&b);
    printf("Before swapping a is %d and b is %d",a,b);
    int temp=a;
    a=b;
    b=temp;
    printf("\nAfter swapping a is %d and b is %d",a,b);
    return 0;
}