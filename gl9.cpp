#include <iostream>
#include <cstring>
#include "gl9_golf.h"
#include "gl9_golf.cpp"
using std::cin;
using std::cout;
using std::endl;
int main(){

	// golf ann, andy;
	// setgolf(ann, "Ann Birdfree",24);
	// showgolf(ann);
	// setgolf(andy);
	// showgolf(andy);
	// handicap(ann,20);
	// showgolf(ann);
	int number;
	cout << "Enter number:";
	cin >> number;
	golf arr[number];
	cin.get();
	for (int i = 0; i < number;i++){
		setgolf(arr[i]);
		
	}
	for (int i = 0; i < number;i++){
		showgolf(arr[i]);
	}
	return 0;
}