#include<iostream>
#include<cstdio>
using namespace std;
class checker{
	private:
		char userEnterChice;
		int firstNum,secondNum;
	public:
		void chices()
		{
			cout<<"1. Addition "<<endl;
			cout<<"2. Subtraction"<<endl;
			cout<<"3. Multiply"<<endl;
			cout<<"4. Divide"<<endl<<endl;
			cout<<"Enter your choice - ";			cin>>userEnterChice;
			
			int valueCheaker = userEnterChice;
			
			if(valueCheaker>=48 && valueCheaker<=57 )
			{
				formula();
				switch(valueCheaker)
				{
					case 49:
						add();
						break;
					case 50:
						sub();
						break;
					case 51:
						mul();
						break;
					case 52:
						div();
						break;
					default:
						cout<<"Enter a Number between ( 1-4 )";
				}
			}
			else
			{
				cout<<"Enter Choice is charter or syblo";
			}
		}
		void formula()
		{
			cout<<"Enter a first number - ";		cin>>firstNum;
			cout<<"Enter a Second number - ";		cin>>secondNum;
				
		}
		void add()
		{
			cout<<firstNum + secondNum;
	
		}
		void sub()
		{
			cout<<firstNum - secondNum;
		}
		void mul()
		{
			cout<<firstNum * secondNum;
		}
		void div()
		{
			cout<<firstNum / secondNum;
		}
};
int main()
{
	checker c1;
	c1.chices();
	return 0;
}
