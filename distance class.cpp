#include<iostream>
using namespace std;
class add{
	public:
		int a,b;
		void input()
		{
			cout<<"Enter two distances: ";
			cin>>a>>b;
			sum(a,b);
		}
		void sum(int a,int b)
		{
			cout<<"Their sum is "<<a+b;
		}
};
int main()
{
	add set1;
	set1.input();
	return 0;
}