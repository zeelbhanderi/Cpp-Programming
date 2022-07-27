#include <iostream>
#include <cstdio>
using namespace std;
class matrix
{
private:
     int first[4][4], second[3][3];

public:
     void matrixfirst()
     {
          cout<<"Enter value of first matrix "<<endl;
          for (int i = 0; i <= 2; i++)       //row
          {
               for (int j = 0; j <= 2; j++)  // col
               {
                    cout<<"Enter "<<i<<j<<" - ";
                    cin>>first[i][j];
               }
               cout<<endl;
          }
     }
     void matrixsecond()
     {
          cout<<"Enter value of second matrix "<<endl;
          for (int i = 0; i <= 2; i++)       //row
          {
               for (int j = 0; j <= 2; j++)  // col
               {
                    cout<<"Enter "<<i<<j<<" - ";
                    cin>>second[i][j];
               }
               cout<<endl;
          }
     }
     void show()
     {
          cout<<"Your Enter first matrix -"<<endl;
          
          for (int j = 0; j <= 2; j++)       //row
          {
               for (int i = 0; i <= 2; i++)  // col
               {
                    cout<<first[i][j]<<"\t";
               }
               cout<<endl;
          }

          cout<<"Your Enter second matrix -"<<endl;
          
          for (int j = 0; j <= 2; j++)       //row
          {
               for (int i = 0; i <= 2; i++)  // col
               {
                    cout<<second[i][j]<<"\t";
               }
               cout<<endl;
          }
     }
};
int main()
{
     matrix m1;
     m1.matrixfirst();
     m1.matrixsecond();
     m1.show();
     return 0;
}