#include<iostream>
#include<cstdio>
#include<windows.h>
#include<string.h>
using namespace std;
class demo{
     private:
          
     public:
          void compares(string firstString, string secondString)
          {
               if (strcmp("Zeel","Bhanderi")==0)
               {
                    cout<<"both string are same";
               }
               else if(strcmp)
               {

               }
               
          }
};
int main()
{
     demo d1;
          char firstString[20], secondString[20];

          cout<<"Enter a First String - ";
          gets(firstString);
          cout<<"Enter a Second String - ";
          gets(secondString);

          if (strcmp(firstString,secondString)==0)
          {
               cout<<"both string are same"<<endl;
          }
          else if(strcmp(firstString,secondString)>0)
          {
               cout<<firstString<<" is Gerater than "<<secondString<<endl;
          }
          else if(strcmp(firstString,secondString)<0)
          {
               cout<<secondString<<" is Gerater than "<<firstString<<endl;
          }
     // d1.compares(firstString,secondString);
     return 0;
}