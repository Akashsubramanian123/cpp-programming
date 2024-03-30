#include<iostream>
using namespace std;
int main()
{
	int r1,c1,r2,c2;
	cout<<"Enter the order of the first matrix: ";
	cin>>r1>>c1;
	cout<<"Enter the order of the second matrix: ";
	cin>>r2>>c2;
	if(c1!=r2)
	{
		r2==c1;
		cout<<"The rows of the matrix 2 must be equal to the column of the matrix 1"<<endl<<"The order is changed for the second matrix as "<<r2<<" x "<<c2<<endl;
	}
	int i,j,m1[r1][c1],m2[r2][c2],mul[10][10];
	cout<<"Enter the elements of the first matrix: "<<endl;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			cin>>m1[i][j];
		}
	}
	cout<<"Enter the elements of the second matrix: "<<endl;
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			cin>>m2[i][j];
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			mul[i][j]=0;
			for(int k=0;k<c1;k++)
			{
				mul[i][j]+=m1[i][k]*m2[k][j];
			}
			cout<<mul[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}