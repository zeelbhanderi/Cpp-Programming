#include<iostream>
#include<cstdio>
#include<windows.h>
using namespace std;
class demo{
     private:
          int numberLength;
          char userEnterValue[20];
     public:
     void get()
     {
          cout<<"Enter a Your Name - ";
          gets(userEnterValue);
     }
     void show1()
     {
          numberLength = strlen(userEnterValue);
          
          cout<<"Your Enter name in reverse string using strlen() function and loop- ";
          for (numberLength; numberLength>=0; numberLength--)
          {
               cout<<userEnterValue[numberLength];
          }
          cout<<endl;
     }
     void show2()
     {
          cout<<"Your Enter name in reverse string using strrev() function - "<<strrev(userEnterValue);
     }
};
int main()
{
     demo d1;
     d1.get();
     d1.show1();
     d1.show2();
     return 0;
}