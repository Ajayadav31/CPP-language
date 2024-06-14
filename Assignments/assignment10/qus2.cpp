#include<iostream>
#include<string.h>
using namespace std;
class Customer
{
    private:
        int cust_id;
        char name[15];
        char email[15];
        long int mobile;
    public:
        void showData()
        {
            cout<<"customer id is :"<<cust_id<<endl;
            cout<<"name is : "<<name<<endl;
            cout<<"email is : "<<email<<endl;
            cout<<"mobile no is : "<<mobile<<endl;
        }
        Customer()
        {

        }
        Customer(int x,char ex[],char ex2[],long int y)
        {
            cust_id=x;
            strcpy(name,ex);
            strcpy(email,ex2);
            mobile=y;
        }
};
int main()
{
    Customer c(1234,"Ajay","ajaygmail.com",9993112423);
    c.showData();
}