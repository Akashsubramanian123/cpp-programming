#include<iostream>
using namespace std;
int main()
{
	int num,count=0;
	cout<<"Enter a number : ";
	cin>>num;
	for(int i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			count++;
		}
	}
	switch (count){
		case 2:
		{
			cout<<num<<" is prime!";
			break;
		} 
		case 1:
		{
			cout<<num<<" is neither prime nor composite!";
			break;
		}
		default:
		{
			cout<<num<<" is not a prime!";
		}
	}
	/*if(count==2)
	{
		cout<<num<<" is prime!";
	}
	else if(count==1)
	{
		cout<<num<<" is neither prime nor composite!";
	}
	else
	{
		cout<<num<<" is not a prime!";
	}*/
	return 0;
}