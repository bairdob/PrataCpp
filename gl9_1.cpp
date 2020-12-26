//gl9_1.cpp
#include <iostream>
#include "gl9_namespace.h"
#include "gl9_sales.cpp"

using namespace SALES;
int main(){
	Sales s1;
	Sales s2 = {{3,4,5,7}};
	double arr[QUARTERS] = {1,23.3,4,5};
	setSales(s1,arr,3);
	showSales(s1);
	setSales(s2);
	showSales(s2);

	return 0;
}