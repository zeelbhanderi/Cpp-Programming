#include <iostream>
#include <cstdio>
using namespace std;
struct student
{
     int admissionNO,std;
     char studentName[50];
};
void schoolHeadFeesDetails();
void teacherData();
int main()
{
     cout << "1. School head \t\t 2. Teacher" << endl
          << endl;

     

     int user;
     cout << "Who are you ? ";
     cin >> user;

     switch (user)
     {
     case 1:
          schoolHeadFeesDetails();
          break;
     case 2:
          teacherData();
     default:
          cout << "Enter a volid identity";
          break;
     }
     return 0;
}
void schoolHeadFeesDetails()
{
     int headFeesChos, stdentFeesData[11];
     while (1)
     {
          cout << "1. Enter Student New fees or change student fees" << endl<< endl;
          cout << "2. Show Now Student fees" << endl;
          cout << "Choses - ";
          cin >> headFeesChos;

          switch (headFeesChos)
          {
          case 1:
               cout << " Std \t\t Fees" << endl;
               cout << "_______________________" << endl;
               for (int i = 1; i <= 10; i++)
               {
                    cout<<i<<"\t\t"; 
                    cin>>stdentFeesData[i];
               }
               cout<<"successfully all fees are enter";
               break;
          case 2:
               cout << " Std \t\t Fees" << endl;
               cout << "_______________________" << endl;
               for (int i = 1; i <= 10; i++)
               {
                    cout<<i<<"\t\t"<<stdentFeesData[i]<<endl;
               }
               
               break;
          default:
               cout << "Please volid enter number";
               break;
          }
     }
};
void teacherData()
{
     student s[50];

     int teacherChos;
     cout << "1. Create Student profile" << endl;
     cout << "2. Show all Student profile List"<<endl;
     cout << "2. Fees paid" <<endl<<endl;

     while (1)
     {
     
          cout<<"Choses - ";
          cin>>teacherChos;
     
          switch (teacherChos)
          {
          case 1:
               for(int i= 1; i<=2; i++)
               {
                    cout<<"Enter a Admission No - ";
	               cin>>s[i].admissionNO;
                    cout<<"Enter a Student Name - ";
                    cin>>s[i].studentName;
                    cout<<"Enter std - ";
                    cin>>s[i].std;
                    
               }
               break;
          case 2:
               cout<<"Admission No \t\t StudentName \t\t Std"<<endl;
               cout<<"_____________________________________________"<<endl;
               for (int i = 1; i <= 2; i++)
               {
                    cout<<" "<<s[i].admissionNO<<"\t\t\t"<<s[i].studentName<<"\t\t\t"<<s[i].std<<endl;
               }
               break;
          case 3:
               break;
          default:
                    cout << "Please volid enter number";
               break;
          }
     }

};