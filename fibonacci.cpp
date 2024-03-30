#include<iostream>
using namespace std;
int main()
{
	int n,a=0,b=1;
	cout<<"Enter the limit: ";
	cin>>n;
	cout<<"Fibonacci series:"<<a<<" "<<b;
	int c=a+b;
	while(n-2>0)
	{
		cout<<" "<<c;
		a=b;
		b=c;
		c=a+b;
		n--;
	}
	return 0;
}