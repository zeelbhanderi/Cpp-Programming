#include<iostream>
#include<cstdio>
using namespace std;
class Date{
     private:
          int dd,mm,yy;
     public:
          void getData(int DD,int MM,int YY)
          {
               dd=DD;
               mm=MM;
               yy=YY;
          }
          void showData()
          {
               cout<<"Your Enter a Date - "<<dd<<" / "<<mm<<" / "<<yy;
          }
};
int main()
{
     Date obj;   
     
     int DD,MM,YY;
     cout<<"Enter a Date - ";      cin>>DD;
     cout<<"Enter a Moth - ";      cin>>MM;
     cout<<"Enter a Year - ";      cin>>YY;
     obj.getData(28,9,2004);
     obj.showData();
     return 0;
}