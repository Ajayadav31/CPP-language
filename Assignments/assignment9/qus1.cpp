//Define a class Complex to represent a complex number with instance variable a and b to store real and imaginary parts. also define following member function
//1.void setData(int,int)
//2.void showData()
//3.Complex add(Complex)
//4.Complex subtract(Complex)
//5.Complex multiply(Complex)
#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b;
    public:
    void setData(int x,int y)
    {
        a=x;
        b=y;
    }
    void showData()
    {
        cout<<"a="<<a<<" b="<<b<<endl;
    }
    Complex add(Complex C1)
    {
        Complex temp;
        temp.a=a+C1.a;
        temp.b=b+C1.b;
        return temp;
    }
    Complex subtract(Complex C1)
    {
        Complex temp;
        temp.a=a-C1.a;
        temp.b=b-C1.b;
        return temp;
    }
    Complex multiply(Complex C1)
    {
        Complex temp;
        temp.a=a*C1.a;
        temp.b=b*C1.b;
        return temp;
    }
};
int main()
{
    Complex c1,c2,c3;
    c1.setData(3,4);
    c1.showData();
    c2.setData(1,2);
    c2.showData();
    c3=c1.add(c2);
    c3.showData();
    c3=c1.subtract(c2);
    c3.showData();
    c3=c1.multiply(c2);
    c3.showData();
    return 0;
}