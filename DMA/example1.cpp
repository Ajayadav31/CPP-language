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
void f1()
{
   // Complex c1,c2,c3,c4;
    Complex *p1,*p2,*p3=nullptr,*p4=nullptr;
    p1= new Complex();
    p2= new Complex();
    p1->setData(1,2);
    p2->setData(3,4);
    p1->showData();
    p3=new Complex();
    if(p3!=nullptr)
        *p3 = *p1 + *p2;//c3=c1.operator+(c2);

    p3->showData();
    p4=new Complex();
    if(p4!=nullptr)
         *p4=*p1 * *p2;

    p4->showData();
    delete p1;
    delete p2;
    delete p3;
    delete p4;
}
int main()
{
    f1();
    return 0;
}