#include <iostream>
using namespace std;
void three();
void see();
int fareng(int);
int func_light (double);
void time (int, int);
int main(){
	// cout << "Ivanov Ivan, Moscow Red Square" << endl;
	// cout << "Enter farlong:";
	// int farlong = 1;
	// cin >> farlong;
	// cout << farlong << " farlongs = " << farlong*220 << " yards" << endl;

	// three();
	// three();
	// see();
	// see();

	// int ages;
	// cout << "Enter your ages:";
	// cin >> ages;
	// cout << "Your ages in months is " << ages*12 << endl;
	
	// int cel;
	// cout << "Please enter a Celsius value: ";
	// cin >> cel;
	// cout << cel << " degree Celius is " << fareng(cel) << " degrees Fagrenheit" << endl;

	// double light;
	// cout << "Enter numbers of light years: ";
	// cin >> light;
	// cout << light << " light years = " << func_light (light) << " astronomical units." << endl; 

	int hours,minutes;
	cout << "Enter the number of hours: ";
	cin >> hours;
	cout << "Enter the number of minutes: ";
	cin >> minutes;
	time (hours,minutes);
	return 0;
}
void three(){
	cout << "Three blind mice" << endl;
}
void see(){
	cout << "See how they run" << endl;
}
int fareng(int cel){
	return 1.8*cel+32;
}
int func_light(double light){
	return light*63240;
}
void time (int hours, int minutes){
	cout << "Time: " << hours << ":" << minutes << endl;
}

