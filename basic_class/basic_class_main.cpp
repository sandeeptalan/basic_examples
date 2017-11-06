#include "basic_class.h"

using namespace std;

int main() {
    char to_pass[13] = "SandeepTalan";
	cout << "Hello Basic Class!!!" << endl;
    basic b1(50, to_pass);
    strcpy(to_pass, "SarikaTalan");
    basic b2(10, to_pass);

    basic b3(b1);       //Copy Constructor
    b3 = b2;            //Assignment Operator
    b3 = b3;            //Self Assignment
	return 0;
}
