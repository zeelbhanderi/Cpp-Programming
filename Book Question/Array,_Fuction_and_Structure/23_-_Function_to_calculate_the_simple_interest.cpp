#include<iostream>
#include<cstdio>
using namespace std;
class simpleinterest{
	private:
	public:
		void calc(float amount,float rate,int time)
		{
			cout<<"Ans - "<<(amount*rate*time)/100;
		}
};
int main()
{
	simpleinterest d1;
	float amount,rate;
	int time;
	
	cout<<"Enter a Amount - ";
	cin>>amount;
	
	cout<<"Enter a rate - ";
	cin>>rate;
	
	cout<<"Enter a time - ";
	cin>>time;
	
	d1.calc(amount,rate,time);
	
	return 0;
}

//https://www.cuemath.com/commercial-math/simple-interest/
