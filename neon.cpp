#include<iostream>
using namespace std;
int main()
{
	int n,sum;
	cout<<"Enter a number : ";
	cin>>n;
	int sqr=n*n;
	while(sqr>0)
	{
		sum+=sqr%10;
		sqr/=10;
	}
	if(sum==n)
	{
		cout<<n<<" is a neon number!";
	}
	else
	{
		cout<<n<<" is not a neon number!";
	}
	return 0;
}