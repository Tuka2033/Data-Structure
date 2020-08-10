#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#ifndef BOOK
#define BOOK
class cBook
{
	int bId;
	char* bName;
	float bPrize;
public:
	cBook();
	cBook(int, const char*, float);
	cBook(cBook&);
	cBook operator =(cBook&);
	friend ostream& operator<<(ostream& out, cBook& obj);
	friend istream& operator>>(istream& in, cBook& obj);
};
#endif
