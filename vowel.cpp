#include<iostream>
using namespace std;
int main()
{
	char a;
	cout<<"Enter a character: ";
	cin>>a;
	if(!isalpha(a))
	{
		cout<<"pls enter an alphabet to check";
		
	}
	else if(a=='a'||a=='A'||a=='e'||a=='E'||a=='i'||a=='I'||a=='o'||a=='O'||a=='u'||a=='U')
	{
		cout<<a<<" is a vowel!";
	}
	else
	{
		cout<<a<<" is a constant!";
	}
	return 0;
}