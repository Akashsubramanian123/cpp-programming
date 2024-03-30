#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter three numbers: ";
	cin>>a>>b>>c;
	/*if(a>b&&a>c)
	{
		cout<<a<<" is the greatest";
	}
	else if(b>a&&b>c)
	{
		cout<<b<<" is the greatest";
	}
	else
	{
		cout<<c<<" is the greatest";
	}*/
	int gre=(a>b)? a:b;
	int max=(gre>c)? gre:c;
	cout<<max<<" is the greatest";
	return 0;
}