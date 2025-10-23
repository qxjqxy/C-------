#include<iostream>
    #include<ctime>
    using namespace std;
    int main()
    {
      srand((unsigned)time(NULL));
      int num=rand()%100+1;
      cout<<num<<endl;
      system("pause");
      return 0;
    }