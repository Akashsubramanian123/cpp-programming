#include<iostream>
using namespace std;
int main()
{
	int cel;
	cout<<"Enter a degree in celcius! ";
	cin>>cel;
	int fah=(cel*1.8)+32;
	cout<<"The given celcius "<<cel<<" in fahrenheit is "<<fah;
	return 0;
}