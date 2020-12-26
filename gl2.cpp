#include <iostream>
#include <cmath>
using namespace std;
int main(){
	// cout << "Enter foots: ";
	// int foots;
	// cin >> foots;
	// cout << "Enter duims: ";
	// int duims;
	// cin >> duims;
	// cout << "Enter weight: ";
	// int weight;
	// cin >> weight;
	// const int dum = 12;
	// const double met = 0.0254;
	// const double kgs = 2.2;
	// cout << "Your BMI is " << (weight / kgs) / pow((foots * 12 + duims) * met,2)  << endl;

	// cout << "Enter latitude in degrees, minutes, and seconds" << endl;
	// int degrees;
	// cout << "First, enter degrees: ";
	// cin >> degrees;
	// int minutes;
	// cout << "Next, enter the minutes of arc: ";
	// cin >> minutes;
	// int seconds;
	// cout << "Finally, enter the seconds of arc: ";
	// cin >> seconds;
	// const int six = 60;
	// cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds " << " = " 
	// 	<< degrees << "." << int((double(minutes) / six)*100) << seconds % six << endl;

	cout << "Enter world's population: ";
	long world;
	cin >> world;
	cout << "Enter population of the us: ";
	long us;
	cin >> us;
	cout << "The population of the US is " << (double (us) / world)*100 << "% of the world population" << endl ;

	return 0;
}