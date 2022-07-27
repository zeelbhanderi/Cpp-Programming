#include<iostream>
#include<cstdio>
using namespace std;
class userInput{
     private:
          char firstName[20],secondName[20];
     public:
     	  void gets(){
               cout<<"Enter First Name - ";        cin>>firstName;
               cout<<"Enter Second Name - ";       cin>>secondName;          
          }
          void show()
          {
               cout<<"Your First Name is "<<firstName<<endl;
               cout<<"Your Second Name is "<<secondName<<endl;
          }
     
};
int main()
{    
     userInput u1;
     u1.gets();
     u1.show();
     return 0;
}
