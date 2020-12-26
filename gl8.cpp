#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
struct candyBar{
	string name;
	double weight;
	int callorie;
};
struct stringy{
	char * str;
	int ct;
};
const int SIZE = 5;
void print(string, int n = 1);
void print_candy(const candyBar &);
void set_candy (string &, double *, int *);
string test_str();
void upper(string);
void set(stringy& ,char *);
void show(stringy,int n = 1);
void show (string,int n = 1);
template <typename anytype>
void max5(anytype *a){
	int i;
	anytype max = a[0];
	for (i = 0; i < SIZE; i++){
		if (a[i] > max) max = a[i];
	}
	cout << max << endl;
}
template <typename anytype>
void maxn(anytype *a, int n){
	int i;
	anytype max = a[0];
	for (i = 0; i < n; i++){
		if (a[i] > max) max = a[i];
	}
	cout << max << endl;
}
int main(){
	// string str = "name";
	// int n = 3;
	// print(str, n);

	// candyBar candy1 = {"Millenium Munch", 2.85, 350};
	// print_candy(candy1);
	// set_candy(candy1.name, &candy1.weight, &candy1.callorie);
	// print_candy(candy1);

	//upper(test_str());

	// stringy beany;
	// char testing[] = "Reality isn't what it used to be.";
	// set(beany,testing);
	// show(beany);
	// show(beany,2);
	// testing[0] = 'D';
	// testing[1] = 'u';
	// show(testing);
	// show(testing,3);
	// show("Done!");

	// double arr[SIZE] = {1,25.3,3.0,4,5};
	// max5(arr);
	int arr1[6] = {30,4,6,7,8,9};
	double arr2[4] = {2.3,4.5,2.6,8.1};
	maxn(arr1,6);
	maxn(arr2,4);
	return 0;
}
void show (string str,int n){
	for(int i = 0; i < n; i++)  cout << str << endl;
}
void show(stringy beany,int n){
	for(int i = 0; i < n; i++) cout << beany.str << endl;
}
void set(stringy &beany, char * testing){
	//beany.str = testing;
	beany.str = new char[strlen(testing)+1];
	strcpy(beany.str,testing);
} 
void print(string str, int n){
	for (int i = 0; i < n; i++) 
	cout << str << endl;
}
void print_candy(const candyBar &candy){
	cout << candy.name << "\t" << candy.weight << "\t" << candy.callorie << endl;
}
void set_candy(string &name, double *weight, int *callorie){
	name = "New";
	*weight = 5.5;
	*callorie = 10;
}

string test_str(){
	string str;
	cout << "Enter a string (q to quit): ";
	while (str != "q") {
		cin >> str;
		return str;
	}
	return str;
}
void upper(string str){
	for (int i = 0; i < sizeof(str)-1; i++) cout << (char)toupper(str[i]);
	cout << endl;
}