#include "basic_class.h"

using namespace std;


basic::basic()
{
    cout << "basic : default : basic_int = " << basic_int << endl;
}

basic::basic(int b_i)
{
    cout << "basic : default parametrized : basic_int = " << basic_int << endl;
}

basic :: basic(int b_i, const char *b_s)
{
    this->basic_int = b_i;
    this->basic_string = new char(strlen(b_s));
    strcpy(this->basic_string, b_s);
    cout << "basic : parametrized : basic_int = " << this->basic_int << " " \
            "basic_string = " << this->basic_string << endl;
}

basic :: basic(basic &b)
{
    this->basic_int = b.basic_int;
    this->basic_string = new char(strlen(b.basic_string));
    strcpy(this->basic_string, b.basic_string);
    cout << "basic : copy : basic_int = " << this->basic_int << " " \
            "basic_string = " << this->basic_string << endl;
}

//void basic :: operator=(basic &b)
basic& basic :: operator=(basic &b)     //always return this, to handle multiple assigments 
{
    if (this == &b)                     //always check for self assignment
    {
        cout << "basic : self assignment detected" << endl;
        return *this;
    }

    this->basic_int = b.basic_int;
    this->basic_string = new char(strlen(b.basic_string));
    strcpy(this->basic_string, b.basic_string);
    cout << "basic : assignment operator : basic_int = " << this->basic_int << " " \
            "basic_string = " << this->basic_string << endl;
    return *this;
}

basic :: ~basic()
{
    cout << "basic : destructor " << endl;
}
