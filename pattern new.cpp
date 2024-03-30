#include<iostream>
using namespace std;
int main()
{
	int i,j,l,k,rows;
	cout<<"Enter the no of rows : ";
	cin>>rows;
	int half=rows/2+1;
	for(i=0;i<rows;i++)
	{
		for(k=0;k<=i;k++)
		{
			cout<<"  ";
		}
		for(j=0;j<rows-i;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
		if(i==rows/2)
		{	
			break;
		}
		
	}
	for(i=half;i<rows;i++)
	{
		for(k=0;k<rows-i;k++)
		{
			cout<<"  ";
		}
		for(j=0;j<=i;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
	
	