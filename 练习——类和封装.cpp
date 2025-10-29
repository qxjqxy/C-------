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

    //通过行为给属性赋值   
    void showstudent(string studentname)
    {
        student=studentname;

    }

};
int main()
{
    stu s1;
    s1.student="张三";//方法2可为：  s1.showstudent("张三")；
    s1.number=12345678;
    s1.stunum();
    system("pause");
    return 0;
}