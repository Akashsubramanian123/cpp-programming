#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,i,sum=0,count=0;
	cout<<"Enter a number : ";
	cin>>n;
	int ori=n,num=n;
	while(n>0)
	{
		count++;
		n/=10;
	}
	while(num>0)
	{
		sum+=pow((num%10),count);
		num/=10;
	}
	if(ori==sum)
	{
		cout<<ori<<" is a armstrong number!";
	}
	else
	{
		cout<<ori<<" is not a armstrong number!";
	}
	return 0;
}