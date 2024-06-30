#include<iostream>
using namespace std;
class Dealer;
class Product
{
    private:
        int p1,p2,p3;
    public:
        void setData(int p1,int p2,int p3)
        {
            this->p1=p1;
            this->p2=p2;
            this->p3=p3;
        }
        void show()
        {
            cout<<"p1="<<p1<<" p2="<<p2<<" p3="<<p3<<endl;
        }
};
int main()
{
    Product obj;
    obj.setData(10,20,30);
    obj.show();
    return 0;
}