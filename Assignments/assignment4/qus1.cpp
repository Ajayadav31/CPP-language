//Define a c++ function to print all prime numbers between two numbers
#include<iostream>
using namespace std;
int isPrime(int n)
{
    int i;
    for(i=2;i<n;i++)
        if(n%i==0)
            return 0;
    return 1;
}
void printPrime(int a,int b)
{
    int x;
    for(x=a+1;x<b;x++)
    {
        if(isPrime(x))
        cout<<x<<endl;
    }
}
int main()
{
    int start,end;
    cout<<"Enter range for printing prime no between in it : ";
    cin>>start>>end;
    printPrime(start,end);
    return 0;
}
