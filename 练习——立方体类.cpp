#include<iostream>
using namespace std;


class cube
{
    public:
    int m_l;
    int m_w;
    int m_h;

    int num()
    {
        return m_l*m_w*m_h;
    }
    int num2()
    {
        return m_l*m_w;
    }
};


int main()
{ 
   cube c1;
   cin>>c1.m_l;
   cin>>c1.m_w;
   cin>>c1.m_h; 
  int v= c1.num();
   cout<<"体积为："<<v<<endl;

   int s= c1.num2();
   cout<<"面积为："<<s<<endl;
   system("pause");
   return 0;
}
 