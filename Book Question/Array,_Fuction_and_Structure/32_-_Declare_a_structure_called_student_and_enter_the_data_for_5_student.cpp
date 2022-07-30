#include<iostream>
#include<cstdio>
using namespace std;
struct studentData{
     float no;
     char name[200];
     char course[200];
};
int main()
{
     studentData student[5];

     for(int i = 0; i<=4; i++)
     {
          cout<<"Enter a Number - ";
          cin>>student[i].no;
          cout<<"Enter a Name - ";
          cin>>student[i].name;
          cout<<"Enter a Course name - ";
          cin>>student[i].course;
     }

     cout<<endl<<endl<<"Number "<<" Name "<<"\tCourse "<<endl;
     for (int i = 0; i <= 4; i++)
     {
         cout<<student[i].no<<"\t"<<student[i].name<<"\t"<<student[i].course<<endl; 
     }
     
     return 0;
}