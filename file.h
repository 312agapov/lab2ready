#ifndef LIBR_H
#define LIBR_H

#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

class Person {
private:
	string name, sname;
    int year;

public:

    Person(string valname, string valsname, int valyear);
	Person();
	Person(const Person &obj);

	void print()const;

	void SetName(string valname);
	string GetName()const;

	void SetColor(string valcolor);
	string GetColor()const;

	bool SetNumber(int valnum);
	int GetNumber()const;

    bool operator==(const Person &Person)const;
    bool operator!=(const Person &Person)const;

    Person operator=(const Person &Person);
    Person & operator=(int number);

    bool operator>=(const Person &Person)const;
    bool operator<=(const Person &Person)const;

    bool operator>(const Person &Person)const;
    bool operator<(const Person &Person)const;

    friend ostream& operator<< (ostream &out, const Person &Person);
    friend istream& operator>> (istream &in,Person &Person);
};

#endif
