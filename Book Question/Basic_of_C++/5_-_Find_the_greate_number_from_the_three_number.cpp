#include<iostream>
#include<conio.h>
using namespace std;
class basic{
	private:
		float firstNum, secondNum, thirdNum;
	public:
		void greaterNum()
		{
			cout<<"------ Find the greater Number ------"<<endl;
		
			cout<<"Enter First Number - "; 		cin>>firstNum;
			cout<<"Enter Second Number - ";		cin>>secondNum;
			cout<<"Enter Third Number - "; 		cin>>thirdNum;
		
			if(firstNum>secondNum && firstNum>thirdNum)
				cout<<"Greater Number is  First number "<<firstNum;
			else if(secondNum>thirdNum)
				cout<<"Greater Number is Second Number "<<secondNum;
			else if(firstNum==secondNum && secondNum==thirdNum)
				cout<<"First, Second and thrid Number is Equal";
			else
				cout<<"Greater Number is Third Number "<<thirdNum;
		}
};
int main()
{
	basic obj;
	obj. greaterNum();
		
	return 0;	
} 
