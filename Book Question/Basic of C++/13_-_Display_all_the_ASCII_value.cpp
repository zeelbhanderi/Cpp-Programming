#include<iostream>
#include<cstdio>
using namespace std;
class ASCII{
     private:
     int i;
     public:
          void printer()
          {
               cout<<"  Number value  |   ASCII value"<<endl;
               for(i=1;i<=255;i++)
               {
                    cout<<"\t"<<i<<"\t|\t"<<(char)i<<endl;
               }
          }

};
int main()
{
     ASCII a1;
     a1.printer();
     return 0;
}