//write a c fuvction to calculate LCM of two number(TSRS)
#include<stdio.h>
int lcm(int,int);
int main()
{
    int a,b,max;
    printf("Enter two number : ");
    scanf("%d %d",&a,&b);
    max=a>b?a:b;
    while(1)
    {
        if(max%a==0&&max%b==0)
        {
            printf("Lcm is %d",max);      
            break;
        }
        max++;
    }
    return 0;
}