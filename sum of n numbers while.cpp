#include<iostream>
using namespace std;
int main()
{
	int n,num,sum=0,i=0;
	cout<<"Enter the value of n: ";
	cin>>n;
	cout<<"Enter "<<n<<" numbers";
	while(i<n)
	{
		cin>>num;
		sum+=num;
		i++;
	}
	cout<<"Sum: "<<sum;
	return 0;
}