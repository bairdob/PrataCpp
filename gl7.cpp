#include <iostream>
#include <cstring>
#include <string.h>
const int SIZE = 10;
struct applicant{
	char name[30];
	int credit_ratings;
};
struct box{
	char maker[40];
	float height;
	float width;
	float lenght;
	float volume;
};

using namespace std;
const int SLEN = 30;
struct student{
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};
int getinfo(student *, int);
void display1(const student *, int);

void massiv1(int *, int, int);
void massiv2(int *, int *, int);
double massiv3(const double *, int);
void show1(applicant);
void show2(applicant *);
double garmonic(int, int);
int enter_massiv(int *, int);
void show_massiv(int *, int);
void average_massiv(int *, int);
void print_struct(box);
void set_volume(box *);
int fill_array(double *, int);
void show_array(double *, int);
void reverse_array(double *, int);
int main(){
	// int a[SIZE];
	// int size, value;

	// std :: cin >> size >> value;
	// massiv1(a,size,value);

	// int b[SIZE] = {0};
	// massiv2(b,(b+5),1);
	// for (int i = 0; i < SIZE; i++) {
	// 	std :: cout << b[i] << "\t";
	// }

	// double c[SIZE] = {0,1,2,31,4,5,6,7,8,9};
	// std :: cout << massiv3(c,SIZE);

	// char str[] = {'h', 'e', 'l', 'l', 'o', '\0'};
	// char c1[] = {'h','\0'};
	// char c2[] = {'m','\0'};

	// applicant a1 = {"name1", 1};
	// show1(a1);
	// show2(&a1);

	// int a = 1, b = 1;
	// while (a != 0 || b != 0){
	// 	std :: cin >> a;
	// 	if (a == 0) break;
	// 	std :: cin >> b;
	// 	if (b == 0) break;
	// 	std :: cout << garmonic(a, b) << std :: endl;
	// }

	// const int SIZE = 5;
	// int data[SIZE];
	// enter_massiv(data, SIZE);
	// show_massiv(data, SIZE);
	// average_massiv(data,SIZE);

	// box box1 = {"name1", 2.3, 4.5, 6,7};
	// print_struct(box1);
	// set_volume(&box1);
	// print_struct(box1);

	// const int SIZE = 5;
	// double data[SIZE];
	// std :: cout << fill_array(data,SIZE) << std :: endl;
	// show_array(data, SIZE);
	// reverse_array(data, SIZE);
	// show_array(data, SIZE);


	// const int SIZE = 3;
	// student st[SIZE];
	// cout << getinfo(st,SIZE);
	// display1(st,SIZE);

	
	
	return 0;
}

int getinfo(student *st, int size){
	int cnt;
	for (cnt = 0; cnt < size; cnt++){
		cin.get(st[cnt].fullname,SLEN);
		if (cin.fail() || cin.get()!= '\n') break;
	}
	return cnt;
}

void display1(const student *st, int size){
	for (int i = 0; i < size; i++){
		cout << st[i].fullname << " ";
	}
}

int fill_array(double *array, int size){
	int i;
	for (i = 0; i < size; i++){
		std :: cin >> array[i];
		if (std :: cin.fail()) break; 
	}
	return i;
}

void show_array(double *array, int size){
	for (int i = 0; i < size; i++){
		std :: cout << array[i] << " ";
	}
	std :: cout << std :: endl;
}

void reverse_array(double *array, int size){
	for (int i = 1; i < size - 1; i++) array[i]=-array[i];
}

void print_struct(box st){
	std :: cout << st.maker << " " << st.height << " "  << st.width  << " " 
		<< st.lenght  << " " << st.volume << std :: endl;
}
void set_volume(box *st){
	st->volume = st->height * st->width * st->lenght;
}
int enter_massiv( int *data, int size){
	for (int i = 0; i < size; i++){
		std :: cin >> data[i];
		if (std :: cin.fail()) break; 
	}
	return *data;
}

void show_massiv(int *data, int size){
	if (std :: cin.fail() != 1){ 
		for (int i = 0; i < size; i++){
			std :: cout << data[i] << " ";	
		}
		std :: cout << std :: endl;
	}
}
void average_massiv(int * data, int size){
	double cnt = 0;
	if (std :: cin.fail() != 1){ 
		for (int i = 0; i < size; i++){
			cnt+=data[i];
		}
	}
	std :: cout << cnt / size << std :: endl;
}

double garmonic(int a, int b){
	return (2.0 * a * b) / (a + b); 
}
void show1(applicant a){
	std :: cout << a.name << "\t" << a.credit_ratings << std :: endl;
}
void show2(applicant *a){
	std :: cout << a->name << "\t" << a->credit_ratings << std :: endl;
}

int replace(char *str, char *c1, char *c2){
	int cnt = 0;
	if (strcmp(str,c1)) cnt++;
	return cnt; 
}

void massiv1(int *a, int size,int value){
	for (int i = 0; i < size; i++) {
		a[i] = value;
		std :: cout << a[i] << "\t";
	}

}
void massiv2(int *a, int *end, int value){
	int *pt;
	for (pt = a; pt != end; pt++) {
		*pt = value;
	}
}
double massiv3 (const double *a, int SIZE){
	double max = a[0];
	for (int i = 0; i < SIZE; i++) 
		if (a[i] > max) max = a[i];
	return max;
}