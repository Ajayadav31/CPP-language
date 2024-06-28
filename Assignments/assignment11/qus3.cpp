//Define Circle class with radius as instance variable.Define two constructor in the class-non parameterised and parameterised
#include<iostream>
using namespace std;
class Circle
{
    private:
        float rad;
    public:
        Circle()
        {
            cin>>rad;
            cout<<"Area is : "<<2*3.14*rad<<endl;
        }
        Circle(float x)
        {
            rad=x;
            cout<<"Area is : "<<2*3.14*rad<<endl;
        }     
};
int main()
{
 //   Circle c1;
    Circle c2(10);
    return 0;
}