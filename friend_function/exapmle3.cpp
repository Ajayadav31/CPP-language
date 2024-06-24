#include<iostream>
using namespace std;

class Complex
{
    private:
        int a,b;     
    public:        
        void setData(int,int);
        void showData();   
        friend Complex operator+(Complex,Complex);   
        friend Complex operator-(Complex);   
};
Complex operator+(Complex X,Complex Y)
{
    Complex temp;
    temp.a=X.a+Y.a;
    temp.b=X.b+Y.b;
    return temp;
}
Complex operator-(Complex X)
{
    Complex temp;
    temp.a=-X.a;
    temp.b=-X.b;
    return temp;
}
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
    c1.setData(3,4);
    c2.setData(5,6);
    c3=c1+c2; //c3=operator+(c1,c2);
    c3.showData();
    c4=-c3; //c4=operator-(c3);
    cout<<endl;
    return 0;
}