//Define a class testResult with properties roll_no,wrong,net_score. also define class properties right_weightage, wrong_weightage. provide methods to set and get all the properties
#include<iostream>
using namespace std;
class TestResult
{
    private:
        int roll_no,right,wrong,net_score,right_weightage,wrong_weightage;
    public:
        void setData(int a,int b,int c,int d,int e,int f)
        {
            roll_no=a;
            right=b;
            wrong=c;
            net_score=d;
            right_weightage=e;
            wrong_weightage=f;
        }
        void getData()
        {
            cout<<"Roll no is : "<<roll_no<<endl;
            cout<<"right choice : "<<right<<endl;
            cout<<"Wrong choice : "<<wrong<<endl;
            cout<<"net score : "<<net_score<<endl;
            cout<<"right weightage : "<<right_weightage<<endl;
            cout<<"wrong weightage : "<<wrong_weightage<<endl;
        }
};
int main()
{
    TestResult t1;
    t1.setData(11,15,10,100,60,40);
    t1.getData();
    return 0;
}
