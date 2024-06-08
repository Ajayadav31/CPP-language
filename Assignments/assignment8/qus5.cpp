//Define a class Circle with radius as its property.Provide setRadius() and getRadius() methods. Also define methods to return area and circumfarance of circle
#include<iostream>
using namespace std;
class Circle
{
        private: 
            float rad;
        public:
            void setRadius(float x)
            {
                rad=x;
            }
            void getRadius()
            {
                cout<<"radius is : "<<rad<<endl;
            }
            void area()
            {
                cout<<"Area is : "<<3.14*rad*rad<<endl;
            }
            void circumfarance()
            {
                cout<<"Circumfarance is : "<<2*3.14*rad;
            }
};
int main()
{
    Circle c;
    c.setRadius(5);
    c.getRadius();
    c.area();
    c.circumfarance();
}