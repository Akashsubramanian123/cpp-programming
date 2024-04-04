#include<iostream>
using namespace std;
int main()
{
	int num,sq_rt;
	cout<<"Enter a number! ";
	cin>>num;
	for(int i=1;i<=num/2;i++)
	{
		if(i*i==num)
		{
			sq_rt=i;
		}
	}
	cout<<"The square root of "<<num<<" is "<<sq_rt;
	return 0;
}