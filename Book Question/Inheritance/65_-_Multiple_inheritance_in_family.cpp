#include<iostream>
#include<cstdio>
using namespace std;
// class Greandfather: public Bigbrother,public smallbrother{
//      protected:
//           char greandFather[15] = {"Kanu bhai"};
//      public:     
// };
// class Parent: public Bigbrother,public smallbrother{
//      protected:
//           char parent[15] = {"Suresh bhai"};
//      public:   
// };  
class Bigbrother : public Smallbrother1{
     protected:
          char bigBrother[15] = {"Zeel"};
     public:
          void getData2()
          {
//               Smallbrother::getdata(); 
               //<<smallBrother
               cout<<"Fenil Punishment control";
          }

};
class Smallbrother1{
     protected:
          char smallBrother[15] = {"Fenil"};
     public:
          
          void getdata()
          {
               cout<<smallBrother<<"don't have any power";
               
          }
};

int main()
{
     int user;
     cout<<"1. Greandfather \t\t 2. Parent \t\t 3. Bigbrother \t\t 4. Smallbrother" <<endl;
     Smallbrother s1;
     Bigbrother b1;
     cout<<"Who are you? ";
     cin>>user;
     switch (user)
     {
     case 4:
               s1.getdata();
          break;
     case 3:
               b1.getData2();
          break;
     case 2:
          
          break;
     case 1:
          
          break;
     default:
          break;
     }
     return 0;
}
