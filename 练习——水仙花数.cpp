#include<iostream>
using namespace std;

int main()
{
    int count=0;  //最开始要赋值
    int num=100;
while(num<=999)
{
    int a=num%10;
    int b=num/10%10;
    int c=num/100;
    if(a*a*a+b*b*b+c*c*c==num)
    {
        cout<<num<<endl;
        count++;
    }
    num++;

}
  cout<<count<<endl;

    system("pause");
    return 0;
    
}
                           