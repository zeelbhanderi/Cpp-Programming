#include<iostream>
#include<cstdio>
using namespace std;
class empData{
     private:
          short empAge;
          char empName[20];
          double empSalary;
     public:
          void getEmployeeData();
          void showEmployeeData();
          empData()
          {
               cout<<"----- Employee Data -----"<<endl<<endl;
          }
};
void empData::getEmployeeData()
{
     cout<<"Enter a Name - ";      gets(empName);
     cout<<"Enter a Age - ";       cin>>empAge;
     cout<<"Enter a Salary - ";    cin>>empSalary;
}
void empData::showEmployeeData()
{
     cout<<"Your Enter a Employee Detail "<<endl<<endl;
     cout<<"Employee Name :- "; puts(empName);
     cout<<"Employee Age :- "<<empAge<<endl;
     cout<<"Employee Salary :- "<<empSalary<<endl;
}
int main()
{
     empData e1;
     e1.getEmployeeData();
     e1.showEmployeeData();
     return 0;
}