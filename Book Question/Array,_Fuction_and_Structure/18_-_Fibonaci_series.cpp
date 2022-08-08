#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
     int n,i,j,k,l;
     l=0;
     i=1;
     j=1;
     cout<<"Enter no foe fibonac series - ";
     cin>>n;
     cout<<i;
     n=1;
     do
     {
          i=j;
          j=n;
          n=j+i;
          cout<<" "<<j<<" \t";
          l++;
     } while (l<=k);
        
     return 0;
}