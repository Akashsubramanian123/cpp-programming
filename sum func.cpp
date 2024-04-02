#include<iostream>
using namespace std;
int add(int x,int y)
{
	return x+y;
}
int main()
{
	int a,b;
	cout<<"Enter two numbers : ";
	cin>>a>>b;
	cout<<"Their sum is "<<add(a,b);
	return 0;
}