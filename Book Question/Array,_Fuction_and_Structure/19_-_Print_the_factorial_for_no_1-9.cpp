#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
     int fact =1;
     for (int i = 1; i <=9; i++)
     {
          fact*=i;
          cout<<"Factorial Number "<<i<<" - "<<fact<<endl;
     }
        
     return 0;
}