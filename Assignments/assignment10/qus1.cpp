#include<iostream>
using namespace std;
class Cuboid
{
    private:
        int l,b,h;
    public:
        void showData()
        {
            cout<<"l="<<l<<" b="<<b<<" h="<<h;
        }
        Cuboid(int x,int y,int z)
        {
            l=x;
            b=y;
            h=z;
        }
};
int main()
{
    Cuboid C(1,2,3);
    C.showData();
    return 0;
}