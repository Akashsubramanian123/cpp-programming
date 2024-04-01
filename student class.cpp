#include<iostream>
using namespace std;
class student{
	public:
	string name;
	int roll;
	int marks;
	void input(){
		cout<<"Student Name : ";
		cin>>name;
		cout<<"Roll number: ";
		cin>>roll;
		cout<<"Marks : ";
		cin>>marks;
	}
};
int main()
{
	int no;
	cout<<"Enter the no of students:";
	cin>>no;
	student students[no];
	for(int i=0;i<no;i++)
	{
		cout<<"Enter the details for student "<<i+1<<": "<<endl;
		students[i].input();
	}
	int max=0;
	int index=0;
	for(int i=0;i<no;i++)
	{
		if(students[i].marks>max)
		{
			max=students[i].marks;
			index=i;
		}
	}
	cout<<"Student with the highest marks : "<<endl;
	cout<<"Name : "<<students[index].name<<endl;
	cout<<"Roll number : "<<students[index].roll<<endl;
	cout<<"Marks : "<<students[index].marks<<endl;
	return 0;
}