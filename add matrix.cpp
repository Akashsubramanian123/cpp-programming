#include<iostream>
using namespace std;
int main()
{
	int r,c;
	cout<<"Enter the order of the matrices: ";
	cin>>r>>c;
	int i,j,m1[r][c],m2[r][c],add[r][c];
	cout<<"Enter the elements of the first matrix: "<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>m1[i][j];
		}
	}
	cout<<"Enter the elements of the second matrix: "<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>m2[i][j];
		}
	}
	cout<<"The result matrix: "<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			add[i][j]=m1[i][j]+m2[i][j];
			cout<<add[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}