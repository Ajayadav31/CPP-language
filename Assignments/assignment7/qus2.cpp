//Define overloaded function to calculate volume of a cuboid,cone and sphere
#include<iostream>
using namespace std;
int volume(int l,int b,int h)
{
    return l*b*h;
}
float volume(float rad,float h)
{
    return 0.33*3.14*rad*rad*h;
}
float volume(float rad)
{
    return 1.33*3.14*rad*rad*rad;
}
int main()
{
    float vol=volume(1,2,3);
    cout<<"Volume of cuboid : ";
    cout<<vol<<endl;
    vol=volume(1.0,2.0);
    cout<<"Volume of cone : ";
    cout<<vol<<endl;
    vol=volume(1.0);
    cout<<"Volume of sphere : ";
    cout<<vol<<endl;
    return 0;
}