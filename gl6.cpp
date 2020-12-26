//gl6 
#include <iostream>
#include <cctype>
#include <fstream>
using namespace std;

const int STRSIZE = 255;
struct bop{
	char fullname[STRSIZE];
	char title[STRSIZE];
	char bopname[STRSIZE];
	int preference;
};
struct mecenat{
		string name;
		double amount;
	};
void enter_data(mecenat *, int);
void print_data(mecenat *, int);
void print_sorted(mecenat *, int);
void _choice (char, bop *,int);
void arange(double ar[],int);
void show_menu();
void _menu(char);
void show_menubop();
bool module_int(int);
int main(){
	// char ch;
	// cin.get(ch);
	// while (ch != '@' ){
	// 	if (islower(ch)) ch = ch - 32;
	// 		else if  (isupper(ch)) ch = ch + 32;
	// 	cout << ch;
	// 	cin.get(ch); 
	// }

	// const int SIZE = 3;
	// double ar[SIZE];
	// for (int i = 0; i < SIZE; i++){
	// 	cin >> ar[i]; 
	// 	if (cin.fail()) break;
	// }
	// if (cin.fail() != 1) arange(ar,SIZE);

	// char ch;
	// show_menu();
	// cin >> ch;
	// _menu(ch);

	// bop data[]= {
	// 	{"realname1", "post1", "secretname1", 0},
	// 	{"realname2", "post2", "secretname2", 1},
	// 	{"realname3", "post3", "secretname3", 2}
	// };
	// int size = sizeof(data)/ sizeof(bop);
	// show_menubop();
	// char choice;
	// cin >> choice; 
	
	// while (choice != 'q'){
	// 	_choice(choice, data,size);
	// 	cin.get(choice);
	// }

	// const double n1 = 0.1;
	// const double n2 = 0.15;
	// const double n3 = 0.2;
	// int money;
	// cin >> money;
	// while (module_int(money)){
	// 	if (money <= 5000) {cout << "0 nalogov\n"; break;}
	// 		else if (money >= 10000 && money < 20000) {cout << money*n1 << " varpov\n"; break;}
	// 			else if (money >= 20000 && money < 35000) {cout <<  n1*10000 + money*n2 << " varpov\n"; break;}
	// 				if (money >= 35000) {cout << n1*10000 + 20000*n2 + (money - 35000)*n3<< " varpov\n"; break;}
	// };

	// int number;
	// cin >> number;
	// mecenat data[number];
	// enter_data(data, number);
	// //print_data(data, number);
	// print_sorted(data, number);

	ifstream file;
	file.open("file.txt");
	char str[50];
	while (file.good()){
		file >> str;
		int cnt = 0;
		for (int i = 0; i< strlen(str);i++) cnt++;
		cout << cnt;
	}
	file.close();

	return 0;
}
void print_sorted(mecenat *data, int number){
	cout << "Grand Patrons: \n";
	for (int i = 0; i < number; i++){
		if  (data[i].amount >= 10000) cout << data[i].name << "\t" << data[i].amount << endl;
	}
	cout << "Patrons: \n";
	for (int i = 0; i < number; i++){
		if  (data[i].amount < 10000) cout << data[i].name << endl;
	}
}

void print_data(mecenat *data, int number){
	cout << "All:";
	for (int i = 0; i < number; i++){
		cout << data[i].name << "\t";
		cout << data[i].amount << endl;
	}
}

void enter_data(mecenat *data, int number){
	for (int i = 0; i < number; i++){
		cin >> data[i].name;
		cin >> data[i].amount;
	}
}

void arange(double array[],int size){
	double summ = 0;
	for (int i = 0; i < size; i++) summ+=array[i];
	cout << "Average = "<< summ / size << endl;
	int cnt = 0;
	for (int i = 0; i < size; i++) if (array[i] > (summ / size)) cnt++;
	cout << "Above = " << cnt << endl;
}

void show_menu(){
	cout << "Please enter one of the following choice: " << endl;
	cout << "c) carnivore	p) pianist" << endl;
	cout << "t) tree         g) game" << endl;
}
void _menu (char ch){
	while (ch == 'c' || ch == 'p' || ch == 't'|| ch == 'g'){
		switch (ch) {
			case 'c': cout << "c" << endl; break;
			case 'p': cout << "p" << endl; break;
			case 't': cout << "t" << endl; break;
			case 'g': cout << "g" << endl; break;
			default : cout << "please enter c, p, t, g: "; 
		};
		continue;
	}
}

void show_menubop(){
	cout << "Report" << endl;
	cout << "a. display by name     b. display by title " << endl;
	cout << "c. display by bopname  d. display by preference" << endl;
	cout << "q. quit " << endl;
}
void _choice (char choice, bop *data,int size){
	switch (choice){
		case 'a': 
			for (int i = 0; i < size; i++){
				 cout << data[i].fullname << endl;
			}; 
			break;
		case 'b':			
			for (int i = 0; i < size; i++){
				 cout << data[i].title << endl;
			}; 
			break;
		case 'c':
			for (int i = 0; i < size; i++){
				 cout << data[i].bopname << endl;
			}; 
			break;
		case 'd':
			for (int i = 0; i < size; i++){
				if (data[i].preference == 0) cout << data[i].fullname << endl;
				if (data[i].preference == 1) cout << data[i].title << endl;
				if (data[i].preference == 2) cout << data[i].bopname << endl;
			}
			break;
		case 'q': break;
	}
}

bool module_int (int money){
	if (money < 0 || isdigit(money)) return false;
		else return true;
}