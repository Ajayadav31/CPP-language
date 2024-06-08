//Define a class Complex to represent a complex number. Declare instance member variables to store real and imaginary part of a complex number, also define instance member function to set values of xomplex number and print values of complex number
#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b;
    public:
        void setValue(int x,int y)
        {
            a=x;
            b=y;
        }
        void displayData()
        {
            cout<<"a="<<a<<endl;
            cout<<"b="<<b;
        }
};
int main()
{
    Complex c;
    c.setValue(2,3);
    c.displayData();
    return 0;
}