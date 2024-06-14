#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b;
    public:
        Complex(int x,int y)
        {
            a=x;
            b=y;
        }
        void showData()
        {
            cout<<"a="<<a<<" b="<<b;
        }
};
int main()
{
    Complex c[5]={Complex(1,2),Complex(3,4),Complex(5,6),Complex(7,8),Complex(9,10)};
    for(int i=0;i<5;i++)
    {
        c[i].showData();
        cout<<endl;
    }
}