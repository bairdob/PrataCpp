//gl5
#include <iostream>
#include <cstring>
#include <array>
#include <string.h>
using namespace std;


struct car{
	string name;
	int year;
};

void enter_cars(int, car *);
void print_cars(int, car *);

int main(){
	// int a,b;
	// int summ = 0;
	// cin >> a >> b;
	// for (int i = a; i <= b; i++) summ+=i;
	// cout << summ << endl;

	// const int SIZE = 100;
	// array  <long double, SIZE> factorial;
	// factorial[0] = factorial[1] = 1;
	// for (int i = 2; i < SIZE; i++ ){
	// 	factorial[i]=i*factorial[i-1];
	// }
	// cout << "100! = "<<(long double)factorial[SIZE-1];

	// int summ = 0;
	// int c;
	// do {
	// 	cin >> c;

	// 	cout << (summ += c) << endl;
	// }
	// while (c != 0);

	// const int base = 100;
	// const float pr1 = 0.1, pr2 = 0.05;
	// float inc1 = base, inc2 = base;
	// int i = 0;
	// int years = 0;
	// while (inc1 >= inc2){ 
	// 	i++;
	// 	inc1 = inc1 + pr1*base;
	// 	inc2 = inc2 + pr2*inc2;
	// 	if (i % 12 == 0) {
	// 		years++;
	// 		cout << years << " year: ";
	// 		cout << inc1 <<" and " << inc2 << endl;
	// 	}
	// }
	// cout << "Need " << years+1 << " years: ";
	// cout << inc1 << " and " << inc2 << endl;

	// const int SIZE = 12;
	// const int YEARS = 3;
	// string years[SIZE] = {"jan","feb", "mar", "apr", "may", "jun" , "jul", "aug", "sep", "oct", "nov", "dec"};
	// int books[YEARS][SIZE] = {0};
	// string month;
	// while (month != "stop"){
	// cout << "Month: ";
	// cin >> month;
	// int kol, y;
	// for (int i = 0; i < SIZE; i++) {
	// 	if (years[i] == month) {
	// 		cout << "Year, books: ";
	// 		cin >> y >> kol;
	// 		books[y-1][i]+=kol;
	// 	}
	// }
	// }	
	// int summ = 0;
	// int overall = 0;
	// for (int j = 0; j < YEARS; j++){
	// 	for (int i = 0; i < SIZE; i++) summ+= books[j][i];
	// 	cout << j+1 <<" year = " << summ << endl;
	// 	overall+=summ;
	// 	summ = 0;
	// }
	// cout << "summ = "<< overall << endl;

	// int digit;
	// cout << "Сколько автомобилей поместить в каталог? ";
	// cin >> digit;
	// car *cars = new car[digit];
	// enter_cars(digit, cars);
	// print_cars(digit, cars);
	// delete []cars;

	int number=0;
	cout << "Введите количество строк: ";
	cin >> number;
	char * str = new char[number];
	for (int i = number;i > 0;i--){
		str[i]='*';
	}
	for (int i=0; i<number;i++)
		cout << str[i];

	return 0;
}
void enter_cars(int digit, car *cars){
	for(int i = 0; i < digit; i++){
		cout << "Автомобиль " << i+1 << endl;
		cout << "Введите производителя: ";
		cin >> (cars+i)->name;
		cout << "Введите год выпуска :";
		cin >> (cars+i)->year; 
	}
}

void print_cars(int digit, car *cars){
	for (int i = 0; i < digit; i++){
		cout << cars[i].name << "\t"<< cars[i].year << endl;
	}
}
