#include <stdio.h>
#include <iostream>

using namespace std;

class typecasting
{
public:
	int i;
	char *c;
	typecasting(int i)
	{
		this->i = i;
		this->c = "example";
	}

	operator int ()
	{
		return i;
	}
/*	
	operator char* ()
	{
		return c;
	}
*/	
/*
	ostream& operator<<(ostream& out, const typecasting &tp)
	{
		out << tp.i;
		return out;
	}
*/
};

const typecasting operator* (const typecasting& tp1, const typecasting& tp2)
{
	return typecasting(tp1.i * tp2.i);
}

int main()
{
/*
    cout << "Type Casting Samples !!!" << endl;
	int a = 10;
	short s = a;
	cout << "int to short : " << s << endl;
	
	double d = 12.12;
	s = d;
	cout << "double to short : " << s << endl;
*/
	typecasting tp(121), tp2(111);
	cout << tp << endl;
	
	typecasting temp(tp * tp2);
	//typecasting temp2(tp2 * 34);	//error
	cout <<  temp << endl;
    return 0;
}