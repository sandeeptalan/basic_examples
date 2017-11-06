#include <iostream>
using namespace std;

//const int global = 121;

void func1()
{
    const int global = 121;
	cout << "func1 : " << global << endl;
    //const int *k = &global;
	const_cast<int&>(global) = 45;
	//static_cast<const int&>(global);
	cout << "func1 : " << global << endl;
}

int main() {
	// prints !!!Hello World!!!
	cout << "Hello !!!" << endl;
	func1();
	int i = 19;
	const int j = 12;
	cout << "j : " << j << endl;
    //const_cast <int&> (j) = 45;
	//cout << "j : " << j << endl;
	return 0;
}
