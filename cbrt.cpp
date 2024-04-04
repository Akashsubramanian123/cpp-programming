#include<iostream>
using namespace std;
int main()
{
	int num,cb_rt;
	cout<<"Enter a number! ";
	cin>>num;
	for(int i=1;i<=num/2;i++)
	{
		if(i*i*i==num)
		{
			cb_rt=i;
		}
	}
	cout<<"The cube root of "<<num<<" is "<<cb_rt;
	return 0;
}