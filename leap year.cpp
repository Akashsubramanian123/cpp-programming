#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"enter the year to check leap year:";
	cin>>x;
	
	if(x%4==0 )
	{
		cout<<"the given year is leap year";
	}
	else{
		cout<<"remaining year for leap year: "<<4-x%4;
	}
}