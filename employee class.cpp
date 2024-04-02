#include<iostream>
using namespace std;
class Employee{
	public:
	string name;
	int id;
	int salary;
	void input(){
		cout<<"Employee Name : ";
		cin>>name;
		cout<<"Id number: ";
		cin>>id;
		cout<<"Salary : ";
		cin>>salary;
	}
};
int main()
{
	int no;
	cout<<"Enter the no of Employees:";
	cin>>no;
	Employee employee[no];
	for(int i=0;i<no;i++)
	{
		cout<<"Enter the details for the employee "<<i+1<<": "<<endl;
		employee[i].input();
	}
	int max=0;
	int index=0;
	for(int i=0;i<no;i++)
	{
		if(employee[i].salary>max)
		{
			max=employee[i].salary;
			index=i;
		}
	}
	cout<<"Employee with the highest salary : "<<endl;
	cout<<"Name : "<<employee[index].name<<endl;
	cout<<"Roll number : "<<employee[index].id<<endl;
	cout<<"Marks : "<<employee[index].salary<<endl;
	return 0;
}