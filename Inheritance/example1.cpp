#include<iostream>
#include<string>
using namespace std;
class Parent
{
    private:
        string surname;
        string address;
        string name="Father";
    public:
        void setSurname(string x)
        {
            surname=x;
        }
        void getSurname()
        {
            cout<<"Surname = "<<surname;
        }
        void setAddress(string x)
        {
            address=x;
        }
        void getAddress()
        {
            cout<<"Address = "<<address;
        }
};
class Child : public Parent
{
    private:
        string name ="son";
};
int main()
{
    Child c1;
    c1.setAddress("Madhya Pradesh");
    c1.getAddress();
    return 0;
}