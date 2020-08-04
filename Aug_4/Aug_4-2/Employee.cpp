#include"Employee.h"
cEmployee::cEmployee()
{
    len = 0;
	eId = 0;
	name = new char[len + 1];
	strcpy(name, " ");
	salary = 0;
}
void cEmployee::Accept()
{
	char nm[50];
	cout << "\nEnter Employee Details::" << endl;
	cout << "Enter Employee Id::";
	cin >> eId;
	cout << "\nEnter Employee Name::";
	cin >> nm;
	len = strlen(nm);
	name = new char[len + 1];
	strcpy(name,nm);
	cout << "\nEnter Employee Salary::";
	cin >> salary;
	cout << "\n=============================================================\n\n";
}
void cEmployee::Display()
{
	cout << "Employee Details::" << endl;
	cout << "Employee Id::" << eId<<endl;
	cout << "Employee Name::" << name << endl;
	cout << "Employee Salary::" << salary << endl;
	cout << "\n=============================================================";
}
cEmployee::~cEmployee()
{
	delete name;
}