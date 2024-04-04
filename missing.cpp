#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of the array : ";
	cin>>n;
	int a[n];
	cout<<"Enter the elements: ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	int i=0;
	while(i<n)
	{
		if(a[i]!=i)
		{
			cout<<"The smallest missing element is :"<<i;
			break;
		}
		i++;
	}
	return 0;
}