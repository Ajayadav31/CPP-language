//Define a class student and write a program to enter student details using constructor and define member function to display all the details 
#include<iostream>
#include<string.h>
using namespace std;
class student
{
    private:
        char name[10];
        int age;
        char program[10];
    public:
        student(char exname[10],int exage,char exprogram[10])
        {
            strcpy(name,exname);
            age=exage;
            strcpy(program,exprogram);
        }
        void dispaly()
        {
            cout<<"name = "<<name<<endl;
            cout<<"age = "<<age<<endl;
            cout<<"Program = "<<program<<endl;
        }
};
int main()
{
    student s1("AJAY",12,"B.Tech");
    s1.dispaly();
    return 0;
}