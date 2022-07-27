#include<iostream>
#include<cstdio>
using namespace std;
class demo{
     private:
     public:
          void sum(float userEnterFirstNum, float userEnterSecondNum)
          {
               cout<<"sum of two number "<<userEnterFirstNum+userEnterSecondNum<<endl;
          }
          void difference(float userEnterFirstNum, float userEnterSecondNum)
          {
               cout<<"Difference of two number "<<userEnterFirstNum-userEnterSecondNum<<endl;
          }
};
int main()
{
     demo d1;
     d1.sum(2,2);
     d1.difference(10,5);
     return 0;
}