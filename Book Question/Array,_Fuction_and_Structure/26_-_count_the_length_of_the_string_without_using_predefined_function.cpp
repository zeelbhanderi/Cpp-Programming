#include<iostream>
#include<cstdio>
using namespace std;
class demo{
     private:
          int i; 
          char userEnterValue[20];
     public:
          void string1()
          {
               cout<<"Enter a Name - ";
               cin>>userEnterValue;

               for ( i = 0; userEnterValue[i]!='\0'; i++)
               {
                    
               } 
               cout<<"The lengh of the string is (1)"<<i<<endl;
          }
          void string2()
          {
               int count =0;
               for ( i = 0; userEnterValue[i]!='\0'; i++)
               {
                    count++;
               } 
               cout<<"The lengh of the string2 is (2)"<<count;
          }
};
int main()
{
     demo d1;
     d1.string1();
     d1.string2();
     return 0;
}