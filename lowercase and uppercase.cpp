#include<iostream>
using namespace std;
class stringcase{
	string text;
	public:
		void input()
		{
			cout<<"Enter a string : ";
			cin>>text;
			cases();
		}
		void cases()
		{
			int i;
			for(i=0;i<text.length();i++)
			{
				if(text.at(i)>='a'&&text.at(i)<='z')
				{
					text.at(i)=text.at(i)-32;
				}
			}
			cout<<"Uppercase : "<<text<<endl;
			for(i=0;i<text.length();i++)
			{
				if(text.at(i)>='A'&&text.at(i)<='Z')
				{
					text.at(i)=text.at(i)+32;
				}
			}
			cout<<"Lowercase : "<<text;
		}
};
int main()
{
	stringcase obj1;
	obj1.input();
	return 0;
}