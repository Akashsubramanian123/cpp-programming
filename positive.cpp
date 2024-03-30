#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	if(num==0)
	{
		cout<<"The number is zero"<<endl;
	}
	else if(num>0)
	{
		cout<<num<<" is positive"<<endl;
	}
	else
	{
		cout<<num<<" is negative";
	}
	return 0;
}