#include <iostream>
#include <cstdio>
using namespace std;
class matrix
{
private:
     int first[4][4], second[3][3], add[3][3];

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
     void sum()
     {
         cout<<"Enter value of second matrix "<<endl;
          for (int i = 0; i <= 2; i++)       //row
          {
               for (int j = 0; j <= 2; j++)  // col
               {
                    add[i][j] = first[i][j]+second[i][j];
                    cout<<add[i][j]<<"\t";
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
     m1.sum();
     return 0;
}


/* Second Method */

// #include <iostream>
// #include <cstdio>
// using namespace std;
// class matrix
// {
// private:
//      int first[4][4], second[3][3], add[3][3];

// public:
//      void matrixfirst()
//      {
//           for (int z = 0; z <= 2; z++)
//           {
//                for (int i = 0; i <= 2; i++) // row
//                {
//                     for (int j = 0; j <= 2; j++) // col
//                     {
//                          switch (z)
//                          {
//                          case 0:
//                               cout << "Enter " << i << j << " - ";
//                               cin >> first[i][j];
//                               break;
//                          case 1:
//                               cout << "Enter " << i << j << " - ";
//                               cin >> second[i][j];
//                               break;
//                          case 2:
//                               add[i][j] = first[i][j]+second[i][j];
//                               cout<<add[i][j]<<"\t";
//                               break;
//                          default:
//                               break;
//                          }
//                     }
//                     cout << endl;
//                }
//           }
//      }
// };
// int main()
// {
//      matrix m1;
//      m1.matrixfirst();
     
//      return 0;
// }