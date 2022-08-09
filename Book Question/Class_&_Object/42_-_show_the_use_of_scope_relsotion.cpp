/**
 --> Scope resolution operator(::) is used for the access the global variable this can be used to uncover a hidden variable. It takes the following  from : (:: variable_nam)
*/
#include<iostream>
#include<cstdio>
using namespace std;
int scopeResolutionVar;       // declared as global variable
void getData2()
{
               cout<<"Enter a Scope Resolution Variable : ";
               cin>>scopeResolutionVar;
}
class demo{
     private:
      int localVar;
     public:
          void getData()
          {
               cout<<"Enter a Local Variable : ";
               cin>>localVar;
          }
          void showdata()
          {
               cout<<"Your Enter a Local Variable : "<<localVar<<endl;
               cout<<"Your Enter a Scope Resolution Variable : "<<::scopeResolutionVar<<endl;
          }
};
int main()
{
     demo obj;
     getData2();   
     obj.getData();
     obj.showdata();
     return 0;
}