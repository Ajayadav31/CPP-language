//Define a class Date with d,m,y as instance variables. initialise members using initializer
#include<iostream>
using namespace std;
class Date
{
    private:
        int d,m,y;
    public:
        Date(int d,int m,int y):d(d),m(m),y(y){}
        void showDate()
        {
            cout<<d<<"/"<<m<<"/"<<y<<endl;
        }
};
int main()
{
    Date d1(31,07,2005);
    d1.showDate();
    return 0;
}