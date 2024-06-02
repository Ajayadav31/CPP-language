//Define a c++ fuction to find out the highest value digit in a given number
#include<iostream>
using namespace std;
int highestValueDigit(int n)
{
    int maxDigit=n%10;
    n=n/10;
    while(n)
    {
        if(maxDigit<n%10)
            maxDigit=n%10;
        n/=10;
    }
    return maxDigit;
}
int main()
{
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    cout<<highestValueDigit(x);
}