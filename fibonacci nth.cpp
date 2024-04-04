#include<iostream>
using namespace std;
int fibo(int a,int b,int n)
{
	if(n>1)
	{
		fibo(b,a+b,n-1);
	}
	else
	{
		cout<<a;
		return 0;
	}

}
int main()
{
	int a=0,b=1,n;
	cout<<"enter the nth number";
	cin>>n;
	fibo(a,b,n);
}
