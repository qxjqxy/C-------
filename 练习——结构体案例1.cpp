#include<iostream>
#include<string>
using namespace std;


struct student
{  
    string sname;
    int score;
};
struct teacher
{
    string tname;
    struct student stu[5];
};

void allocatespace(struct teacher tea[],int len)
{
    string nameseed="ABCDE";

    //给老师赋值
    for(int i=0;i<len;i++)
    {
        tea[i].tname="teacher_";
        tea[i].tname+=nameseed[i];
        //通过老师给学生赋值
        for(int j=0;j<5;j++)
        {
            tea[i].stu[j].sname="student_";
            tea[i].stu[j].sname+=nameseed[j];

            tea[i].stu[j].score=60;

        }

    }

}


void printinfo(struct teacher tea[],int len)
{
    for(int i=0;i<len;i++)
    {
        cout<<"老师姓名："<<tea[i].tname<<endl;

        for(int j=0;j<5;j++)
        {
            cout<<"\t学生姓名:"<<tea[i].stu[j].sname<<
            "分数："<<tea[i].stu[j].score<<endl;

        }
    }
}

int main()
{
   struct teacher tea[3];
   int len=sizeof(tea)/sizeof(tea[0]);

   allocatespace(tea,len);

   printinfo(tea,len);

    system("pause");
    return 0;
}
