//Define a class Time to represent a time with instance variable h,m and s to store hour,minute and second. also define following member function
//1.void setTime(int,int,int)
//2.void showTime()
//3.void normalize()
//4.Time add(Time)
//5.bool is_greater(Time)
#include<iostream>
using namespace std;
class Time{
    private:
        int h,m,s;
    public:
        void setTime(int,int,int);
        void showTime();
        void normalize();
        Time add(Time);
        bool is_greater(Time);
};
void Time::setTime(int x,int y,int z)
{
    h=x;m=y;s=z;
}
void Time::showTime()
{
    cout<<h<<"-"<<m<<"-"<<s;
}
void Time::normalize()
{

}
Time Time::add(Time T)
{
    Time temp;
    temp.h=h+T.h;
    temp.m=m+T.m;
    temp.s=s+T.s;
}
bool Time::is_greater(Time T)
{

}
int main()
{
    return 0;
}