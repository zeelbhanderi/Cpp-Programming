#include<iostream>
#include<cstdio>
using namespace std;
class demo{
     private:
     public:
     void swap(float firstNum,float secondNum)
     {       
          float temp;
          cout<<"swapping with using three variable "<<endl<<endl;  

          temp=firstNum;
          firstNum=secondNum;
          secondNum=temp;

          cout<<"Your Enter a First Number after swap - "<<firstNum<<endl;
          cout<<"Your Enter a Second Number after swap - "<<secondNum<<endl;



          cout<<"swapping without using three variable "<<endl<<endl; 
                                             //ex.  a=10    b=20
          secondNum=secondNum-firstNum;
          firstNum=secondNum+secondNum;


          cout<<"Your Enter a First Number after swap - "<<firstNum<<endl;
          cout<<"Your Enter a Second Number after swap - "<<secondNum<<endl;


     }
};
int main()
{
     demo d1;
     float firstNum,secondNum;
     
     cout<<"Enter a First Number - ";
     cin>>firstNum;
     cout<<"Enter a Second Number - ";
     cin>>secondNum;

     d1.swap(firstNum,secondNum);
     return 0;
}