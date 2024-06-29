//Define a class Complex and overload following operators as a friend--(1)+,(2)-,(3)*
#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b;
    public:
        void showData()
        {
            cout<<"a="<<a<<" b="<<b<<endl;
        }
        Complex()
        {

        }
        Complex(int x,int y) 
        {
            a=x;
            b=y;
        }
        friend Complex operator+(Complex,Complex);
        friend Complex operator-(Complex,Complex);
        friend Complex operator*(Complex,Complex);
};
Complex operator+(Complex C1,Complex C2)
{
    Complex temp;
    temp.a=C1.a+C2.a;
    temp.b=C1.b+C2.b;
    return temp;
}
Complex operator-(Complex C1,Complex C2)
{
    Complex temp;
    temp.a=C1.a-C2.a;
    temp.b=C1.b-C2.b;
    return temp;
}
Complex operator*(Complex C1,Complex C2)
{
    Complex temp;
    temp.a=C1.a*C2.a;
    temp.b=C1.b*C2.b;
    return temp;
}
int main()
{
    Complex c1(1,2);
    Complex c2(3,4);
    Complex c3;
    c3=c1+c2;
    c3.showData();
    c3=c2-c1;
    c3.showData();
    c3=c1*c2;
    c3.showData();
    return 0;
}
