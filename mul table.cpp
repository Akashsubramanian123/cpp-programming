#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<n<<" x "<<i<<" = "<<n*i<<endl;
	}
	return 0;
}