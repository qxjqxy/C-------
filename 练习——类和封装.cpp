#include<iostream>
#include<string>
using namespace std;

class stu
{
    public:
    string student;
    int  number;

    void stunum()
    {
        cout<<"姓名："<<student<<endl;
        cout<<"学号："<<number<<endl;
        
    }
};
int main()
{
    stu s1;
    cin>>s1.student;
    cin>>s1.number;
    void stu();
    system("pause");
    return 0;
}