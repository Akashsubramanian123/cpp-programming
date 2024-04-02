#include<iostream>
using namespace std;
int main()
{
	string text="One two     three\n four\tfive ";
	int len=text.length(),word,i,count=0;
	for(i=0;i<len;i++)
	{
		if(text.at(i)==' '||text.at(i)=='\n'||text.at(i)=='\t')
		{
			word=0;
		}
		else if(word==0)
		{
			count++;
			word=1;
		}
	}
	cout<<"The number of words: "<<count;
	return 0;
}