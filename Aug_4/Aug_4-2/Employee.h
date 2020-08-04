#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class cEmployee
{
	int eId,len;
	char *name;
	float salary;
public:
	cEmployee();
	void Accept();
	void Display();
	friend istream& operator>>(istream &in, cEmployee &e)
	{
		
		char nm[50];
		cout << "Enter Employee Id::";
		in >> e.eId;
		cout << "\nEnter Employee Name::";
		in >> nm;
		e.len = strlen(nm);
		e.name = new char[e.len + 1];
		strcpy(e.name, nm);
		cout << "\nEnter Employee Salary::";
		in >> e.salary;
		return in;
	}
	friend ostream& operator<<(ostream &out, cEmployee &e)
	{
	    out << "\nEmployee Details::" << endl;
		out << "Employee Id::" << e.eId << endl;
		out << "Employee Name::" << e.name << endl;
		out << "Employee Salary::" << e.salary << endl;
		out << "\n=============================================================\n\n";
		return out;
	}
	cEmployee(cEmployee& e)
	{
		this->eId = e.eId;
		len = strlen(e.name);
		this->name = new char[len + 1];
		strcpy(this->name, e.name);
		this->salary = e.salary;
	}
	cEmployee operator =(cEmployee e)
	{
		this->eId = e.eId;
		this->len = e.len;
		this->name = new char[this->len + 1];
		strcpy(this->name, e.name);
		this->salary = e.salary;
		return *this;
		
	}
	~cEmployee();
};
