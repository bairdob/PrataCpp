#include <iostream>
#include <cstring>
#include <array>
using namespace std;

struct CandyBar{
	string name;
	float weight;
	int callorie;
};

CandyBar cin_candy();
void cout_candy(CandyBar);

struct pizza_info{
	string company;
	float diam;
	float weight;
};

int main(){
	// string name,lname;
	// int age;
	// char gr;
	// cout << "What is your first name: ";
	// cin >> name;
	// cout << "What is your last name: ";
	// cin >> lname;
	// cout << "What latter grade do you deserve? ";
	// cin >> gr;
	// cout << "What is your age? ";
	// cin >> age;
	// cout << "Name: " << name << ", " << lname << endl;
	// cout << "Grade: " << (char)(gr + 1) << endl;
	// cout << "Age: " << age << endl; 

	// string name,lname, full;
	// cout << "What is your first name: ";
	// cin >> name;
	// cout << "What is your last name: ";
	// cin >> lname;
	// full = lname + ", " + name;
	// cout << "Here's information in a single string: ";
	// cout << full << endl;

	// const int SIZE = 3;
	// CandyBar snack[SIZE];
	// snack[0]=cin_candy();
	// snack[1]=cin_candy();
	// snack[2]=cin_candy();
	// cout_candy(snack[0]);
	// cout_candy(snack[1]);
	// cout_candy(snack[2]);


	// pizza_info *pizza1 = new pizza_info;
	// cout << "Company: ";
	// cin >> pizza1->company;
	// cout << "Diametr: ";
	// cin >> pizza1->diam;	
	// cout << "Weight: ";
	// cin >> pizza1->weight;
	// cout << pizza1->company << pizza1->diam << pizza1->weight;
	// delete pizza1;

	array <int, 3> results;
	cin >> results[0];
	cin >> results[1];
	cin >> results[2];
	cout << results[0] << results [1] << results[2];
	cout << (results[0] + results [1] + results[2]) / 3; 

	return 0;
}

CandyBar cin_candy(){
	CandyBar snack;
	cout << "Name: ";
	cin >> snack.name;
	cout << "Weight: ";
	cin >> snack.weight;	
	cout << "Callorie: ";
	cin >> snack.callorie;
	return snack;
}
void cout_candy(CandyBar snack){
	cout << "Name: " << snack.name;
	cout << " Weight: " << snack.weight;	
	cout << " Callorie: " << snack.callorie << endl;
}