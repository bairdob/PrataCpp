//gl10_func.cpp
#include "gl10_namespace.h"
BANK::BANK(){
	name = "no name";
	number = "0";
	balance = 0.0;
}
BANK::BANK(const std::string &str,const std::string &n, double m){
	name = str;
	number = n;
	balance = m;
}
BANK::~BANK(){
	std::cout << "bye " << name << std::endl ;
}
void BANK::show(){
	std::cout << name << "\t"<< number << "\t"<< balance << std::endl;
}
void BANK::add(double n){
	if (n < 0) std::cout << "Inccorect value" << std::endl; 
		else balance+=n;
}
void BANK::take(double n){
	if (n > balance) std::cout << "Inccorect value" << std::endl;
		else balance-=n;
}
Person::Person(){
	lname = "test", fname[0] = '1';
}
Person::Person(const std::string &ln,const char *fn){
	lname = ln;
	strcpy(fname,fn);
}
void Person::show()const{
	std::cout << lname << "\t" << fname << std::endl;

}
void Person::formalshow() const{
	std::cout << fname << "\t" << lname << std::endl;
}

void Golf::show() const{
	std::cout << fullname << "\t" << handicap << std::endl;
}
Golf::Golf(const char* fn, int n){
	strcpy(fullname,fn);
	handicap = n;
}
void Golf::sethandicap(int n){
	handicap =n;
}
// const Golf &Golf::setgolf(const Golf &g,char *fn, int n)const{
// 	Golf *pn = new Golf;
// 	strcpy(pn->fullname,fn);
// 	pn->handicap = n;
// 	return *this;
// }

Sales::Sales(){
	sales[0] = 0;
	average = max = min = 0;
}
void Sales::show()const{
	for (int i=0; i < QUARTERS; i++) std::cout << sales[i] << " ";
	std::cout << std::endl << average << " " << max << " " << min << std::endl;
}
void Sales::set(double *arr,int n){
	max = min = arr[0];
	for (int i=0; i < n; i++) {
		sales[i] = arr[i];
		average+=arr[i];
		if (arr[i] > max) max = arr[i];
		if (arr[i] < min) min = arr[i];
	}
}

void Move::show()const{
	std::cout << x << "\t" << y << std::endl;
}

void Move::add(const Move &m){
	using std::cout;
	using std::endl;
	x+=m.x;
	y+=m.y;
	// cout << m.x << endl;
	// cout << x;
}
Betelgeize::Betelgeize(const char *str, int n){
	strcpy(name,str);
	ci = n;
}
void Betelgeize::show()const{
	std:: cout << name << "\t" << ci << std::endl;
}
void Betelgeize::set(int n){
	ci = n;
}
Betelgeize Betelgeize::add(const Betelgeize &b){
	ci+=b.ci;
	return *this;
}