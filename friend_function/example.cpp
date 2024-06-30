#include<iostream>
using namespace std;
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
        friend void sameer();
};
void sameer()
{
    Ajay a;
    a.money=1000;
    a.atmPin=1234;
    cout<<"Hello!,i am ajay friend"<<endl;
    cout<<"Ajay personal details as follows : "<<endl;
    a.showData();
}
int main()
{
    sameer();
    return 0;
}