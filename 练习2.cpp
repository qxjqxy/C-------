#include<iostream>
using namespace std;
#include<ctime>
int main()
{
    int num;

    srand((unsigned int)time(NULL));
    num=rand()%100+1;
    cout<<num<<endl;

    cout<<"请输入数字"<<endl;
    
    int val=0;
    
    while(1)
    {
     cin>>val;
   
    if(val<num)
    {

        cout<<"猜小了"<<endl;
    }    
    else if(val>num)
    {
        cout<<"猜大了"<<endl;
    }
    else if(val=num)
    {
        cout<<"猜对了"<<endl;
        break;
    }
    }
    system("pause");
    return 0;
   
}