#include<iostream>
using namespace std;
class time{
	public:
		int hours;
		int minutes;
		int seconds;
		void input(){
			cout<<"Enter the time in HH:MM:SS format:"<<endl;
			cout<<"hours : ";
			cin>>hours;
			cout<<"minutes : ";
			cin>>minutes;
			cout<<"seconds : ";
			cin>>seconds;
			convert(hours,minutes,seconds);
		}
		void convert(int hours,int minutes,int seconds){
			int total_sec=0;
			if(hours>=0&&minutes>=0&&seconds>=0)
			{
				total_sec=hours*3600+minutes*60+seconds;
			}
			cout<<"Total seconds : "<<total_sec<<endl;
		}
};
int main()
{
	time set1;
	set1.input();
	return 0;
}