#include<iostream>
using namespace std;
int main()
{
	int i,j,a[]={9,3,8,0,4,7,1,2,6,5};
	int len=sizeof(a)/sizeof(a[0]);
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(a[i]>a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<len;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}