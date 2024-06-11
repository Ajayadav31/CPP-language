#include<iostream>
#include<string.h>
using namespace std;
class Book
{
    private:
        char title[10];
        int price;
    public:
        Book()
        {

        }
        Book(char ex[10],int x)
        {
            strcpy(title,ex);
            price=x;
        }
        void showData()
        {
            cout<<"title="<<title;
            cout<<"price="<<price;
        }
};
int main()
{
    Book b1;
    Book b2("C lang",350);
    b2.showData();
}