#pragma once
#include <iostream>
using namespace std;

class String
{
private:
	char* str;
	int length;
public:
	String() 
		: String(80) {}
	String(int size) 
		: str{ new char[size] },
		  length{ size } {}
	String(const char* istr)
		: str{ new char[strlen(istr) + 1] },
		length(strlen(istr))
	{
		strcpy_s(str,length,istr);
	}

	~String()
	{
		delete[] str;
	}

	void cinstr() {
		cout << "Vvedite string: ";
		cin.getline(str, length);
	}

	void coutstr() {				// void showStr() const {
		cout << str << endl;
	}
};
