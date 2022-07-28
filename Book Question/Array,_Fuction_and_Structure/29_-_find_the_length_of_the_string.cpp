#include<iostream>
#include<cstdio>
#include<windows.h>
using namespace std;
class demo{
     private:
          char userEnterName[20];
     public:
          void countString()
          {
               cout<<"Enter a Name - ";
               gets(userEnterName);
          
               cout<<strlen(userEnterName);       //strlen() is predefined
                                                  //strlen() return string length 
          }
};
int main()
{
     demo d1;
     d1.countString();
     return 0;
}