#include<iostream>
#include<cstdio>
using namespace std;
class findLargest{
     private:
          float firstNum,secondNum,thirdNum;
     public:
          void getData();
          int largest();
          void showData();
};
void findLargest :: getData()
{
     cout<<"------ Find Largest number ------"<<endl<<endl;

     cout<<"Enter a First Number - ";        cin>>firstNum;
     cout<<"Enter a Second Number -";        cin>>secondNum;
     cout<<"Entre a Thrid Number ";          cin>>thirdNum;
}
int findLargest :: largest()
{
     if (firstNum>secondNum && firstNum>thirdNum)
     {
          return firstNum;
     }
     else if(secondNum>thirdNum)
     {
          return secondNum;
     }
     else
     {
          return thirdNum;
     }     
}
void findLargest :: showData()
{
     cout<<"Largest value is "<<largest(); 
}
int main()
{
     findLargest obj,obj2;   
     obj.getData();
     obj.largest();
     obj.showData();
     return 0; 
}