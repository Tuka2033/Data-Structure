#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class cEmp
{
	int size;
	int id;
	char* name;
public:
	cEmp()
	{
		size = 0;
		id = 0;
		name = new char[size];
		strcpy(name, " ");
	}
	friend ostream& operator<<(ostream& out, cEmp& obj)
	{
		out << "\nEmployee ID::" << obj.id;
		out << "\nEmployee name::" << obj.name;
		return out;
	}
	friend istream& operator>>(istream& in, cEmp& obj)
	{
		cout << "\nEnter Employee ID::";
		in >> obj.id;
		cout << "\nEnter Employee name::";
		in >> obj.name;
		return in;
	}
	cEmp operator =(cEmp& obj)
	{
		this->id = obj.id;
		this->name = obj.name;
		return *this;
	}
};
