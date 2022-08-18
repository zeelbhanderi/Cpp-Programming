#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
     int n,i,userEnter[100];

     cout<<"How many Number are enter a - ";
     cin>>n;
     for(i=0;i<n;i++)
     {
          cin>>userEnter[i];
     }
     for(i=0;i<n;i++)
     {
          cout<<"Enter Number"<<i<<userEnter[i]<<endl;
     }
     return 0;
}