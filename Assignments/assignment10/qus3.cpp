#include<iostream>
using namespace std;
class Time
{
    private:
        int hr,min,sec;
    public:
        void showData()
        {
            cout<<"hr="<<hr<<" min="<<min<<" sec="<<sec;
        }
        Time(int x,int y,int z)
        {
            hr=x;
            min=y;
            sec=z;
        }
};
int main()
{
    Time t(2,30,15);
    t.showData();
}