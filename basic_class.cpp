#include <iostream>
using namespace std;

class basic
{
private:
    int basic_int;
    char *basic_string;
public:
    basic()
    {
        cout << "basic : default" << endl;
    }
};

int main() {
	cout << "Hello Basic Class!!!" << endl;
    
	return 0;
}
