#include<iostream>
using namespace std;

int main()
{
    int count;
for(int ge=0;ge<10;ge++)
{
    for(int shi=0;shi<10;shi++)
    {
        for(int bai=1;bai<10;bai++)
        {
            if(ge^3+shi^3+bai^3==ge+shi*10+bai*100)
            {
                count++;
            }
        }
    }
}

cout<<count<<endl;
    system("pause");
    return 0;
    
}
