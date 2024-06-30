#include<iostream>
using namespace std;
class Ajay;
class SchoolFriend
{
    public:
        void sameer(Ajay &obj);
};
class Ajay
{
    private:
        //friend void sameer();  //no effect of access modifier
        int money;
        int atmPin;
    public:
        void showData()
        {
            cout<<"money = "<<money<<" Atm pin= "<<atmPin<<endl;
        }
        friend void SchoolFriend::sameer(Ajay &);
};

void SchoolFriend::sameer(Ajay &obj)
{
    obj.money=1000;
    obj.atmPin=1234;
    cout<<"Hello!,i am ajay friend"<<endl;
    cout<<"Ajay personal details as follows : "<<endl;
    obj.showData();
    
}
int main()
{
   SchoolFriend friend1;
   Ajay obj1;
   friend1.sameer(obj1);
    return 0;
}