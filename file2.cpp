#include "file.h"
#include <string>

void Person::SetName(string valname)
{
    name = valname;
}

void Person::SetColor(string valsname)
{
    sname = valsname;
}

bool Person::SetNumber(int valyear)
{
    if (valyear < 0)
    {
       return false;
    }
    else{year=valyear;}
}

Person::Person(string valname, string valsname, int valyear)
{
    if (!SetNumber(valyear))
    {
        year = 0;
    }
    name = valname;
	sname = valsname;
}

Person::Person()
{
	name = "Leonid";
	sname = "Agapov";
	year = 2001;
}

Person::Person(const Person &obj)
{
	name = obj.name;
	sname = obj.sname;
	year = obj.year;
}

void Person::print () const
{
	cout << name << "/" <<sname<< "/" << year << "\n\n";
}

string Person::GetName()const { return name; }
string Person::GetColor() const{ return sname; }
int Person::GetNumber() const{ return year; }

bool Person::operator==(const Person &Person)const
{
return year == Person.year && name == Person.name && sname == Person.sname;
}

bool Person::operator!=(const Person &Person)const
{
return !(year == Person.year && name == Person.name && sname == Person.sname);
}

bool Person::operator>=(const Person &Person)const
{
return (year >= Person.year);
}

bool Person::operator<=(const Person &Person)const
{
return (year <= Person.year);
}

Person Person::operator=(const Person &Person){
        this->name = Person.name;
        this->sname = Person.sname;
        return *this;
}

Person&Person::operator=(int year)
{
        this->year = year;
        return *this;
}

bool Person::operator>(const Person &Person)const
{
    return (year > Person.year);
}

bool Person::operator<(const Person &Person)const
{
    return (year < Person.year);
}

ostream& operator<< (ostream &out, const Person &Person)
{
    out  << Person.name << "/" << Person.sname<<"/"<< Person.year;
    return out;
}

istream& operator>> (istream &in, Person &Person)
{
    in >> Person.name;
    in >> Person.sname;
    in >> Person.year;
    return  in;
}
