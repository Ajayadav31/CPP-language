//Define a class Time to represent Time(like 3hr 45 min 20 sec). Declare appropriate number of instans=ce member variable and also define instance member function to set values for time and display values of time
#include<iostream>
using namespace std;
class Time
{
    private:
        int h,m,s;
    public:
        void setTime(int x,int y,int z)
        {
            h=x;
            m=y;
            s=z;
        }
        void displayTime()
        {
            cout<<h<<" hr "<<m<<" min "<<s<<" sec";
        }
};
int main()
{
    Time t;
    t.setTime(3,45,20);
    t.displayTime();
    return 0;
}