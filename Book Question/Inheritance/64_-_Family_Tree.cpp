#include<iostream>
#include<cstdio>
using namespace std;
class FatherGrandparent{
     protected:
          char GFF_name[15],GMF_name[15];
     public:
          void getFatherGrandParentData()
          {
               cout<<"Enter a Child Grandfather(father) name - ";
               gets(GFF_name);
               cout<<"Enter a Child Grandmother(father) name - ";
               gets(GMF_name);
          }
          void showFatherGrandParentData()
          {
               cout<<"Child Grandfather(father) name - "<<GFF_name<<endl;
               cout<<"Child Grandmother(father) name - "<<GMF_name<<endl;
          }
};
class Father: public FatherGrandparent{
     protected:
          char F_name[15];
     public:
          void getFatherData()
          {
               cout<<"Enter Child Father name - ";
               gets(F_name); 
          }
          void showFatherData()
          {
               cout<<"Father name - "<<F_name<<endl;
               cout<<"Child Grandfather(father) name - "<<GFF_name<<endl;
               cout<<"Child Grandmother(father) name - "<<GMF_name<<endl;
          }
};
class MotherGrandparent{
     protected:
          char GFM_name[15],GMM_name[15];
     public:
          void getMotherGrandParentData()
          {
               cout<<"Enter a Child Grandfather(mother) name - ";
               gets(GFM_name);
               cout<<"Enter a Child Grandmother(mother) name - ";
               gets(GMM_name);
          }
          void showMotherGrandParentData()
          {
               cout<<"Child Grandfather(mother) name - "<<GFM_name<<endl;
               cout<<"Child Grandmother(mother) name - "<<GMM_name<<endl;
          }
};
class Mother: public MotherGrandparent{
     protected:
          char M_name[15];
     public:
          void MotherData()
          {
               cout<<"Enter Child Mother name - ";
               gets(M_name);
          }
          void showMotherData()
          {
               cout<<"Mother name - "<<M_name<<endl;
               cout<<"Child Grandfather(mother) name - "<<GFM_name<<endl;
               cout<<"Child Grandmother(mother) name - "<<GMM_name<<endl;
          }
};
class Child:public Father,public Mother{
     protected:
          char Child_name[15];
     public:
          void ChildData()
          {
               cout<<"Enter a Child Name - ";
               gets(Child_name);
          }
          void showChildData()
          {
               cout<<"Child name - "<<Child_name<<endl<<endl;

               cout<<"Father name - "<<F_name<<endl;
               cout<<"Child Grandfather(father) name - "<<GFF_name<<endl;
               cout<<"Child Grandmother(father) name - "<<GMF_name<<endl;

               cout<<"Mother name - "<<M_name<<endl;
               cout<<"Child Grandfather(mother) name - "<<GFM_name<<endl;
               cout<<"Child Grandmother(mother) name - "<<GMM_name<<endl;
          }
};
int main()
{
     Child obj;
     obj.ChildData();
     obj.getFatherData();
     obj.getFatherGrandParentData();
     obj.MotherData();
     obj.getMotherGrandParentData();
     
     while (1)
     {
          cout<<endl<<endl;
          
          cout<<" (111) Grand Parent         (211) Grand Parent "<<endl;
          cout<<"            |                          |       "<<endl;
          cout<<"            |                          |       "<<endl;
          cout<<"            v                          v       "<<endl;
          cout<<"     (11) Father                 (21)Mother   "<<endl;
          cout<<"            \\                        /        "<<endl;
          cout<<"              \\                    /          "<<endl;
          cout<<"                \\                /            "<<endl;
          cout<<"                  \\            /              "<<endl;
          cout<<"                    (1) Child                  "<<endl;

     
          int userChose;
          cout<<" who do you Chooses  at- ";
          cin>>userChose;
          cout<<endl<<endl;

          switch (userChose)
          {
          case 1:
                    obj.showChildData();
               break;
          case 11:
                    obj.showFatherData();
               break;
          case 21:
                    obj.showMotherData();
               break;
          case 111:
                    obj.showFatherGrandParentData();
               break;
          case 211:
                    obj.showMotherGrandParentData();
               break;
          default:
               cout<<"Please void enter number (1,11,21,111,211)";
               break;
          }
     }
     return 0;
}