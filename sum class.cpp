#include<iostream>
using namespace std;
class add{
	public:
		int a,b;		
		void input()
		{
			cout<<"Enter two numbers: ";
			cin>>a>>b;
			sum();
		}
		void sum()
		{
			cout<<"Their sum is "<<a+b;
		}
};

int main()
{
	add set1;
	set1.input();
	//set1.sum();
	return 0;
}