//gl11.cpp
#include "gl11.h"
#include "gl11_func.cpp"
using std::cout;
using std::endl;
using namespace COMPLEX;
int main(){
	Complex c1(3.0,4.0);
	Complex c2(10,12);
	Complex c3;
	std::cin >> c3;
	cout << c3 << endl;
	//c1.show();
	cout << c1 << endl << c2 << endl;
	cout << c1+c3 << endl;
	return 0;
}