#include <iostream>
#include <string.h>


class basic
{
private:
    int basic_int;
    char *basic_string;
public:
    basic();
    basic(int b_i);
    basic(int b_i, const char *b_s);
    basic(basic &b);
    basic& operator=(basic &b);     //always return this, to handle multiple assigments
    //void operator=(basic &b);
    ~basic();
};

