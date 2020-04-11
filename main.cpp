#include "file.h"
#include <string>

using namespace std;

int main() {

    int a;
    int valyear;
    string valname;
    string valsname;

    Person rrr(valname, valsname, valyear);
	Person rrr2;
b:
	cout <<"\t1-cvvesti person\n";//1 потом 3
	cout <<"\t2-posmotret' person\n";
	cout <<"\t3-zapusk\n";
	cout <<"\t4-vixod\n\n";
	cin >>a;
	if (a==1)
	{
    cout << "vvedite imya: ";
    cin>>valname;
      rrr.SetName(valname);

    cout <<"vvedite familiyu: ";
    cin>>valsname;
      rrr.SetColor(valsname);

    cout << "vvedite god rozdenia:";
    cin>>valyear;
       rrr.SetNumber(valyear);

    Person rrr3 = rrr;
    goto b;
    }
    if (a==2)
    {
    cout << "\n";
    cout << "Imya: " << rrr.GetName() << endl;
	cout << "Familia: " << rrr.GetColor() << endl;
	cout << "God rozdenia: " << rrr.GetNumber() << endl << endl;

    cout<<"Person1"<<endl;
    rrr.print();

    cout<<"Person2"<<endl;
    rrr2.print();

    Person rrr3 = rrr;
    cout<<"Person3"<<endl;
    rrr3.print();

    goto b;
    }
    if (a==3)
	{
    rrr.print();
    rrr2=rrr;
    cout<<"Vvodim 2145 god\n";
    rrr = 2145;
    rrr.print();
    }
    if (a==4)
    {
        return 0;
    }
	}
