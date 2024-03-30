#include<iostream>
using namespace std;
int main()
{
	int num,i,rem,sum=0;
	cout<<"Enter a number : ";
	cin>>num;
	int ori=num;
	while(num>0)
	{
		rem=num%10;
		int fact=1;
		for(i=1;i<=rem;i++)
		{
			fact*=i;
		}
		sum+=fact;
		num/=10;
	}
	if(sum==ori)
	{
		cout<<ori<<" is a strong number";
	}
	else
	{
		cout<<ori<<" is not a strong number";
	}
	return 0;
}