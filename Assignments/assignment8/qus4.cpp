//In question 3,Define a method to display date in the following pattern
//1.  31-12-2022
//2.  31-Dec-2022
#include<iostream>
#include<string.h>
using namespace std;
class Date
{
    private:
        int d,m,y;
        char month[10];
    public:
        void setDate(int a,int b,int c)
        {
            d=a,m=b,y=c;
        }
        void setDate(int a,char b[10],int c)
        {
            d=a;
            strcpy(month,b);
            y=c;
        }
        void getDate()
        {
            cout<<d<<"-"<<m<<"-"<<y<<endl;
        }
        void getDate(int j)//if i=1 print in pattern no 2
        {
            cout<<d<<"-"<<month<<"-"<<y<<endl;
        }
    
};
int main()
{
    Date d;
    d.setDate(31,"Dec",2022);
    d.getDate(1);
    d.setDate(31,12,2022);
    d.getDate();
    
}