#include<iostream>
using namespace std;
class Dealer;
class Product
{
    private:
        int p1,p2,p3;
    public:
        void show()
        {
            cout<<"p1="<<p1<<" p2="<<p2<<" p3="<<p3<<endl;
        }
        friend void dost(Product &);
};


void dost(Product &obj1)
{
    obj1.p1=10;     //private member
    obj1.p2=20;
    obj1.p3=30;
}
int main()
{
    Product obj;
    dost(obj);
    obj.show();
    cout<<endl;
    return 0;
}