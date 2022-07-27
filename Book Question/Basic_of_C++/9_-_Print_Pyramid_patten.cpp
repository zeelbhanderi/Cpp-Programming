/* Print the following pyramid 
     ex. 1
         22
         333
         4444
         55555 */
#include <iostream>
#include <cstdio>
using namespace std;
class patten
{
private:
     int i, j, userEnterValue;

public:
     void pyramid()
     {
          cout<<"Enter a Number - ";         cin>>userEnterValue;
          for (i = 1; i <= userEnterValue; i++)           // column
          {
               for (j = 1; j <= i; j++)      //row
               {
                    cout << i ;
               }
               cout<<endl;
          }
     }
};
int main()
{
     patten p1;
     p1.pyramid();
     return 0;
}