#include<iostream>
using namespace std;
class time{
	public:
		int total_sec;
		time(){
			cout<<"Enter the total seconds : ";
			cin>>total_sec;
			convert(total_sec);
		}
		void convert(int total_sec)
		{
			int hours=0;
			int minutes=0;
			int seconds=0;
			if(total_sec>=3600)
			{
				hours=total_sec/3600;
				total_sec=total_sec%3600;
			}
			else
			{
				hours=0;
			}
			if(total_sec>=60)
			{
				minutes=total_sec/60;
				seconds=total_sec%60;
			}
			else
			{
				minutes=0;
				seconds=total_sec;
			}
			cout<<"Hours : "<<hours<<"Minutes : "<<minutes<<"Seconds : "<<seconds;
		}
};
int main()
{
	time set1;
	return 0;
}