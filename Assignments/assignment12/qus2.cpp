//Create a class time which contains hour,min and second as fields. overload greater than.(>)operator to compare two time object
#include<iostream>
using namespace std;
class Time {
    private:
        int h,m,s;
    public:
        Time(int x,int y, int z) :h(x),m(y),s(z) {}
        
        int operator>(Time T)
        {
            int result=0;
            result=h>T.h&&m>T.m&&s>T.s;
            return result;
        }
 };
int main()
{
    Time t1(2,50,12),t2(3,45,0);
    int result=t1>t2;
    cout<<result<<endl;
    return 0;
}