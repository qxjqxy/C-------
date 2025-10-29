#include<iostream>
#include<string>
using namespace std;

class stu
{
    public:
    char student;
    int  number;
    void stunum()
    {
        cin>>student;
        cin>>number;
    }
};
int main()
{
    stu s1;
    cout<<"姓名："<<s1.student<<endl;
    cout<<"学号："<<s1.number<<endl;
    system("pause");
    return 0;
}