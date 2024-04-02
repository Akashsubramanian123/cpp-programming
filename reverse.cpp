#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a number : ";
	cin>>num;
	int ori=num,rev;
	while(num>0)
	{
		rev=(rev*10)+(num%10);
		num/=10;
	}
	cout<<"The reverse of "<<ori<<" is "<<rev;
	return 0;
}