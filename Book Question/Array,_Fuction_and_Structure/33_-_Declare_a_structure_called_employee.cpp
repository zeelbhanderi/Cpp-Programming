#include <iostream>
#include <cstdio>
#include <windows.h>
using namespace std;
class employee
{
     private:
     
     long int No;
     double Tel_no;
     char Name[20], house_no[30], city[20];

     public:
          // -------------------------- Employee Data Enter --------------------------
          void employeeDataEnter()
          {
               cout << "Enter a your employee ID number : ";
               cin >> No;
               cout << "Enter a Name : ";
               cin >> Name;
               cout << "Enter a House number : ";
               cin >> house_no;
               cout << "Enter a city name : ";
               cin >> city;
               cout << "Enter phone number : ";
               cin >> Tel_no;
          }
          // -------------------------- Employee Data Show --------------------------
          void employeeDataShow()
          {
               cout << No << "\t\t" << Name << "\t " << house_no << "\t\t" << city << "\t\t" << Tel_no<<endl;
          }
};
struct companyData
{
     char companyName[20];
     int compEmpNum;
};

int main()
{
     // -------------------------- Company Data Enter --------------------------

     companyData c1;

     cout << "Enter a Company Name : ";
     cin >> c1.companyName;
     cout << "How many Employee in your a Company : ";
     cin >> c1.compEmpNum;
     // ------------- loader -------------
     cout << "\n\n\t\t Your Company are creating";
     for (int i = 0; i <= 5; i++)
     {
          cout << ".";
          Sleep(1000);
     }

     // -------------------------- Employee optin --------------------------
     cout << "\n\n\n\t\t\t"
          << "Comapny name : " << c1.companyName << endl;

     
     employee e[100];
     while (1)
     {
          cout <<endl<< "1. Create Employee \t\t";
          cout << "2. Show Exiting employee \t\t";
          cout << "3. exit"<<endl;

          int userChoses;
          cout << "How to chosee - ";
          cin >> userChoses;

          switch (userChoses)
          {
          case 1:
               for(int i = 1; i<= c1.compEmpNum; i++)
               {
                    e[i].employeeDataEnter();
               }
               break;
          case 2:
               cout << "\n\nEmployee  \tName  \t House number \tCity name \tphone number " << endl;
               cout << "_______________________________________________________________________" << endl;
               for(int i = 1; i<= c1.compEmpNum; i++)
               {
                    e[i].employeeDataShow();
                    
               }
               break;
          case 3:
               exit(0);
          default:
               cout << "Enter volid Choses (between 1 or 2)";
               break;
          }
     }

     return 0;
}
