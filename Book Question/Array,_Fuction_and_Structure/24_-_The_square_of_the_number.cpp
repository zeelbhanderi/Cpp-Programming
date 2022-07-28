#include<iostream>
#include<cstdio>
using namespace std;
class square{
	private:
		
	public:
		int get()
		{
			float userEnterValue;
			
			cout<<"Enter a Value -";
			cin>>userEnterValue;
			
			return userEnterValue;
		}
		int calc(float enterValue)
		{
			return enterValue*enterValue;
		}
				
};
int main()
{
	square s1;
	cout<<"Your Enter value of square - "<<s1.calc(s1.get());
	return 0;
}
