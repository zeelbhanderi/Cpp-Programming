#include<iostream>
#include<cstdio>
using namespace std;
class string1{
     private:
          char userEnterValue[20];
     public:
          void user()
          {
               cout<<"Enter a Name - ";
               gets(userEnterValue);

               cout<<endl<<"Your Enter a Name - ";
               puts(userEnterValue);
          }
};
int main()
{
     string1 s1;
     s1.user();
     return 0;
}