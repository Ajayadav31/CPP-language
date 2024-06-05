//define a function to calculate LCM of three numbers
#include<iostream>
using namespace std;
int lcm(int a,int b, int c)
{
    int L;
    for(L=a>b?a>c?a:c:b>c?b:c;L<=a*b*c;L++)
    {
        if(L%a==0&&L%b==0&&L%c==0)
            return L;
    }
}
int main()
{
    int result=lcm(2,7,6);
    cout<<result;
    return 0;
}