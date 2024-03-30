#include<iostream>
using namespace std;
/*int Gcd(int x,int y)
{
	if(x==0) 
	{
		return y;
	}
	if(y==0) 
	{
		return x;
	}
	if(x==y) 
	{
		return x;
	}
	if(x>y) 
	{
		return Gcd(x-y,y);
	}
	return Gcd(x,y-x);
}*/
/*int Gcd(int n1,int n2)
{
	if(n2!=0)
	{
		return Gcd(n2,n1%n2);
	}
	else
	{
		return n1;
	}
}*/
int main()
{
	int a,b,i=1,gcd;
	cout<<"Enter two numbers: ";
	cin>>a>>b;
	do
	{
		if(a%i==0&&b%i==0)
		{
			gcd=i;
		}
		i++;
	}while(i<=a&&i<=b);
	
	cout<<"GCD = "<<gcd;
	return 0;
}