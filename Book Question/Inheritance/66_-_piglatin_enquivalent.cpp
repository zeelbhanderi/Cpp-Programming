#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
class demo{
     private:
          char userEnterString[50];
     public:
          void getData()
          {
               cout<<"Enter a String - ";
               cin>>userEnterString;
          }
          void showData()
          {
               // for (int i = 0; userEnterString[i]!='\0'; i++)
               // {
               //      if(userEnterString[i]='\0')
               //      {
                         cout<<userEnterString<<"a";
               //      }
               // }
               
               // puts(userEnterString);
          }
};
int main()
{
     demo obj;   
     obj.getData();
     obj.showData();
  return 0;
}