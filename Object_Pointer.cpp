#include<iostream>
using namespace std;
class Product
{
    private:
        int p1,p2,p3;
    public:
        void show()
        {
            cout<<"p1="<<p1<<" p2="<<p2<<" p3="<<p3<<endl;
        }
        friend void dost();
};
void dost()
{
    Product obj1;
    Product *p;
    p=&obj1;
    obj1.p1=10;
    (*p).p2=10;
    p->p3=10;
    obj1.show();
}
int main()
{
    dost();
}