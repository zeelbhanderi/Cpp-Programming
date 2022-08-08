#include<iostream>
#include<cstdio>
using namespace std;
class p
{
	protected:
		float a,b;
	public:
		void getData()
		{
			cout<<"Enter a first number - ";
			cin>>a;
			cout<<"Enter a second Number - ";
			cin>>b;
		}
};
class d: public p
{
	protected:
		float sum;
	public:
		void show()
		{
			sum=a*b;
			cout<<"Multiple a "<<a<<" and "<<b<<" of "<<sum;
		}
};
int main()
{
	d obj;
	obj.getData();
	obj.show();
	return 0;
}
