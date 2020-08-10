#include"Book.h"
cBook::cBook()
{
	int len = 0;
	bId = 0;
	bName = new char[len + 1];
	strcpy(bName, " ");
	bPrize = 0;
}
cBook::cBook(int id, const char *nm, float pr)
{
	int len = strlen(nm);
	bId = id;
	bName = new char[len + 1];
	strcpy(bName,nm);
	bPrize = pr;
}
cBook::cBook(cBook& obj)
{
	int len = strlen(obj.bName);
	this->bName = new char[len + 1];
	strcpy(this->bName, obj.bName);
	this->bId = obj.bId;
	this->bPrize = obj.bPrize;
}
cBook cBook::operator =(cBook& obj)
{
	int len = strlen(obj.bName);
	this ->bName = new char[len + 1];
	strcpy(this->bName,obj.bName);
	this->bId = obj.bId;
	this->bPrize = obj.bPrize;
	return *this;

}
ostream& operator<<(ostream& out, cBook& obj)
{
	out << "\nBook Id::" <<obj.bId;
	out << "\nEnter Book Name::"<<obj.bName;
	out << "\nEnter Book Prize::"<< obj.bPrize;
	out << "\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	return out;
}
istream& operator>>(istream& in, cBook& obj)
{
	char nm[20]; int len;
	cout << "\nEnter Book Id::";
	in >> obj.bId;
	cout << "\nEnter Book Name::";
	in >>nm;
	len = strlen(nm);
	obj.bName = new char[len + 1];
	strcpy(obj.bName, nm);
	cout << "\nEnter Book Prize::";
	in >> obj.bPrize;
	return in;
}