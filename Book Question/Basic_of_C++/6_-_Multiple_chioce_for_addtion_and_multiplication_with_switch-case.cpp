#include<iostream>
#include<cstdio>
using namespace std;
class switch_case{
     private:
     int userEnterChice;
     float firstNum,secondNum;
     public:
          void get()
          {
               cout<<"1. Addition"<<endl;
               cout<<"2. Multiplication"<<endl;
               cout<<"Enter a your Choice - "<<endl;
               cin>>userEnterChice;
               switch (userEnterChice)
               {
               case 1:
                    cout<<"Enter a first Number - ";             cin>>firstNum;
                    cout<<"Enter a second Number - ";            cin>>secondNum;

                    cout<<"Additio of two Number - "<<firstNum+secondNum;
                    break;
               case 2:
                    cout<<"Enter a first Number - ";             cin>>firstNum;
                    cout<<"Enter a second Number - ";            cin>>secondNum;

                    cout<<"Additio of two Number - "<<firstNum*secondNum;
                    break;
               default:
                    break;
               }
          }
};
int main()
{
     switch_case d1;
     d1.get();
     return 0;
}