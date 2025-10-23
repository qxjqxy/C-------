# C++笔记
### 一、C++格式
```c++
 #include<iostream>
 using namespace std;

 int main()
 {
   cout<<"hello world"<<endl;//endl,是“L"不是end1
    system("pause");
    return 0;
 }
 ```

 ### 二、C++基础
 #### ***2.1、变量及使用***
 ```c++
int a=10;
cout<<a<<endl;//10
cout<<"a="<<a<<endl;//a=10
```
#### ***2.2、常量***
- 作用：用于记录程序中不可更改的数据
- 定义的两种方式
     - **#define   宏常量**：    #define 常量名=变量值   
        **通常在文件上方定义**，表示一个常量
     - **const**修饰的变量：const 数据类型 常量名=常量值     
        **通常在变量定义前加关键字const**，修饰该变量为常量，不可修改       

#### ***2.3、数据类型***    
- **整型**
  |数据类型|占用空间|
  |----|----|
  |short(短整型)|2字节|
  |int(整型)|4字节|
  |long(长整型)|Windows为4字节,Linux为4字节(32位),8字节(64位)|
  |long long(长长整型)|8字节|   

- **实型**  
  |数据类型|占用空间|有效数字范围|
  |:---:|:--:|:----:|
  |float（单精度）|4字节|7位有效数字|
  |double（双精度）|8字节|15~16位有效数字|    
  
  * 一般float类型后要加f，例：float f1=3.14f;   
  * 默认情况下，输出一个小数，会显示6为有效数字


- **科学计数法**
```c++
float f1=3e2;  //3*10^2;     //300
cout<<"f1="<<f1<<endl
```   

- **字符型**
  - 作用：用于显示单个字符
  - 语法：char ch=‘a’；
  - **注意1**：在显示字符型变量时，用**单引号**
  - **注意2**：单引号内只能有一个字符，不能有字符串    
       -  例：char ch2='b'
  - **注意3**：只占用1个字节
  - **注意4**：字符型变量并不是把字符本身放到内存中，而是将对应的ASCll编码放到储存单元
      - 可以直接用ASCll给字符型变量赋值   
      - A -65
      - a -97
  ```c++
  char ch='a';
  cout<<ch<<endl;
  cout<<(int)ch<<endl;
  ch=97;
  ```
     
- **转义字符**   (不全)
    - \n:换行
    - \\:反斜杠
    - \t:水平制表符    
  
- **字符串型**
     - **c语言风格**：char 变量名[ ]="字符串值"
     ```c++
     char str[]="hello";
     cout<<str1<<end1;
     ```
     - **c++风格**:string 变量名="字符串值"  **(需包含头文件 #include\<string>)**
     ```c++
     string str2="helllo";
     cout<<str2<<endl; 
     ```

- **布尔类型（bool）**
    - bool类型占1个字节大小 
    - 只有两个值：
       - true---真（本质是1）
       - false---假（本质是0）
```c++
bool flag=true;
cout<<flag<<endl;   //1
```

#### ***2.4、数据的输入（键盘输入）***
     - 关键字：**cin**
     - 语法：cin>>变量
```c++
int a=0;
cout<<"请给a赋值："<<endl;
cin>>a;
cout<<"整型变量a="<<a<<endl;        
```
   (<<为插入运算符，>>为提取运算符)      
  (cin不完全是重新赋值，cin是获取你的输入在把你的输入给变量)  

#### ***2.5、sizeof关键字***    
作用：可以统计数据类型所占内存大小    
例： 
```c++
cout <<"int 类型所占内存空间为："<< sizeof(int) <<endl  
int num1=10; 
cout <<"int 类型所占内存空间为："<< sizeof(num1) <<endl
```   

#### ***2.6、运算符***

......

```c++
cout<<(a==b)<<endl;     //需要加括号  
```   
#### ***2.7、三目运算符***
  作用：实现简单的运算     
  语法：表达式1？表达式2：表达式3     
  如果1为真，执行2，并返回2的结果     
  如果1为假，执行3，并返回3的结果

  ```c++
  int a=10;
  int b=20;
  int c=0;
  c=(a>b?a:b);
  cout<<"c="<<c<<endl;
  ```

 在C++中 三目运算符 返回的是变量，可以继续赋值


#### ***2.8、程序流程结构***
  （顺序结构、选择结构、循环结构）  
  ##### 1、选择结构 
  - **if语句**
   ```c
   if(score>600)
   {
    cout<<"恭喜考上"<<endl;
   }
  ```

  ```c++
   if(score>600)
   {
    cout<<"考上"<<endl;
   }
   else      //可加上else if
   {
    cout<<"未考上"<<endl;
   }
   ```
   ```c++
   //if嵌套
   if()
   {
    if()
    {    }
    else if()
    {    }
    ......
   }
   ```

   - ***switch语句***
     - 执行多条件分支语句
     - 语法
     ```c++
     switch(表达式)
     {

      case 结果1：执行语句;break;
      case 结果2：执行语句;break;     //break表示结束当前分支，否则会继续向下执行

      ...
      default:执行语句;break;
     }
     ```

     - **注意1**：switch语句中表达式只能是***整型或字符型***
     - **注意2**：case里如果没有break，那么程序会一直向下执行    
  **与if语句相比，对于多条件判断时，switch的结构清晰，缺点是switch不可以判断区间** 
  ##### 2、循环结构 
  - while     
    语法：while（循环条件）{ 循环语句}   
    ```c++
    while(num<10)
    {
      cout<<num<<endl;
      num++;
    }
    ```
    随机数
    ```c++
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
    ```



    

