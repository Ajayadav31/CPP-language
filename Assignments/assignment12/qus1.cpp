//Define a class Complex with appropriate instance variables and member functions.Define following operators in the class
//(1)+ (2)-, (3)*, (4)==
#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b;
    public:
        void setData(int,int);
        void showData();  
        Complex operator+(Complex C)
        {
            Complex temp;
            temp.a=a+C.a;
            temp.b=b+C.b;
            return temp;
        }
        Complex operator-(Complex C)
        {
            Complex temp;
            temp.a=-C.a;
            temp.b=-C.b;
            return temp;
        }
        Complex operator*(Complex C)
        {
            Complex temp;
            temp.a=a*C.a;
            temp.b=b*C.b;
            return temp;
        }
        Complex operator==(Complex C)
        {
            Complex temp;
            temp.a=a==C.a;
            temp.b=b==C.b;
            return temp;
        }
};
void Complex:: setData(int x,int y) 
{
    a=x;
    b=y;
}
void Complex::showData()
{
    cout<<"a="<<a<<" b="<<b<<endl;
}
int main()
{
    Complex c1,c2,c3,c4;
    c1.setData(1,2);
    c2.setData(3,4);
    c3=c1+c2;//c3=c1.operator+(c2);
    c3.showData();
    c4=c1*c2;
    c4.showData();
    c4=c1-c2;
    c4.showData();
    c4=c1==c2;
    c4.showData();
    return 0;
}