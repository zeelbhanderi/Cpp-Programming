#include<iostream>
#include<cstdio>
using namespace std;
class arrays{
     private:
     float sum;
     int userEnterValue[10];
     public:
          void get()
          {
               for (int i = 0; i <= 9; i++)
               {
                    cout<<"Enter a Number "<<i ;
                    cin>>userEnterValue[i];
               }               
          }
          void add()
          {
               for (int i = 0; i <= 9; i++)
               {
                    sum=sum+userEnterValue[i];  
					   
               }
               cout<<"Total Number - "<<sum;
          }
};
int main()
{
     arrays a1;
     a1.get();
     a1.add();
     return 0;
}
