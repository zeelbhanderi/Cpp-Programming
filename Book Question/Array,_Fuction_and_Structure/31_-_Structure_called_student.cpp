#include<iostream>
#include<cstdio>
using namespace std;
struct studentData
{
     int roll_no;
     char name[20];
};

int main()
{
     studentData s1 ;
     cout<<"Enter a Roll no - ";
     cin>>s1.roll_no;
     cout<<"Enter a name - ";
     cin>>s1.name;

     cout<<s1.roll_no<<endl;
     puts(s1.name);
     return 0;
}