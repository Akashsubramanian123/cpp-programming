#include<iostream>
using namespace std;
int x=20;
string text="outside";
int main()
{
	int x=10;
	string text="Inside";
	cout<<"Local x : "<<x<<endl;
	cout<<"Global x : "<<::x<<endl;
	cout<<"Local string : "<<text<<endl;
	cout<<"Global string : "<<::text<<endl;
	return 0;
}