#include<iostream>
#include<cstdio>
using namespace std;
class Employee{
     protected:
          
     public:
          int number;
          string name;
};


class Manager : public Employee{
     protected:
          string projectType, testingType;
     public:
          void getManData();         
          void showManData();
};
void Manager :: getManData()
{
     cout<<"Enter Employee Number - ";         cin>>number;
     cout<<"Enter a Name - ";           cin>>name;
     cout<<"Enter a Project Type - ";   cin>>projectType;
     cout<<"Enter a Testing Type - ";   cin>>testingType;
}
void Manager :: showManData()
{
     
} 


class Labourer : public Employee{
     public:
     
};



class Scientist : public Employee{
     protected:
          string researchType;
     public:
          void getSciData(); 
};
void Scientist :: getSciData()
{
     cout<<"Enter Employee No - ";           cin>>number;
     cout<<"Enter a name - ";                cin>>name;
     cout<<"Enter a Research Type - ";       cin>>researchType;
}
int main()
{
     Employee emp; 
     Manager man;
     man.getManData();   
     Scientist sci;
     sci.getSciData();
     Labourer lab;
     return 0;
}