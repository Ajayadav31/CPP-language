//write a c fuvction to calculate LCM of two number(TSRS)
#include<stdio.h>
int lcm(int,int);
int main()
{
    int a,b,find;
    printf("Enter two number : ");
    scanf("%d %d",&a,&b);
    printf("lcm is : %d",lcm(a,b));
    return 0;
}
int lcm(int x,int y)
{
    int max;
    for(max=x>y?x:y;max<=x*y;max++)
    {
        if(max%x==0&&max%y==0)
            return max; 
    }
}