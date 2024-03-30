#include<iostream>
using namespace std;
int main()
{
	int n,sum;
	cout<<"Enter a number : ";
	cin>>n;
	int ori=n;
	while(n>0)
	{
		sum+=n%10;
		n/=10;
	}
	cout<<"Sum of digit of "<<ori<<" is "<<sum;
	return 0;
}