#include<iostream>
#include<cstdio>
using namespace std;
struct student{
     int admissionNO;
     char studentName[50];     
};
// void schoolHeadFeesDetails();
//      void studentData();
int main()
{
     cout<<"1. School head \t\t 2. Student"<<endl<<endl;
     
     // student s1;

     
     int user;
     cout<<"Who are you ? ";
     cin>>user;

     switch (user)
     {
     case 1:
          cout<<"Student";
          // void schoolHeadFeesDetails();     
          break;
     case 2:
          void studentData();
     default:
          cout<<"Enter a volid identity";
          break;
     }
     return 0;
}
void studentData()
{
     cout<<"Student";
};
void schoolHeadFeesDetails()
{
     cout<<"School";
};