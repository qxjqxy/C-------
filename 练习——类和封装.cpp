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
    s1.student="张三";
    s1.number=12345678;
    void stunum();
    system("pause");
    return 0;
}