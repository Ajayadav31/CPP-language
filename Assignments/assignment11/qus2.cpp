//Define a class room for a hotel management project with room number,room type,is_ac,price as instance member.Initialize instance variable using constructer
#include<iostream>
using namespace std;
class Room
{
    private:
        int roomNo;
        int price;
        char is_Ac;
    public:
        Room(int a,int b,char c)
        {
            roomNo=a;
            price=b;
            is_Ac=c;
        }
        void Display()
        {
            cout<<"Room No is : "<<roomNo<<endl;
            cout<<"Price is : "<<price<<endl;
            cout<<"Ac availiblity : "<<is_Ac<<endl;
        }
};
int main()
{
    Room r(169,4000,'N');
    r.Display();
    return 0;
}