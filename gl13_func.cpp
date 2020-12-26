//gl14_func.cpp
#include "gl13.h"
#include <cstring>

Cd::Cd(const char *s1, const char *s2, int n, double x){
	strcpy(performers, s1);
	strcpy(label, s2);
	selection = n;
	playtime = x;
}

void Cd::Report()const{
	std::cout << performers << "\t" << label << "\t" << selection << "\t" << playtime << std::endl;
}

Cd::Cd(const Cd &d){
	strcpy(performers,d.performers);
	strcpy(label,d.label);
	selection = d.selection;
	playtime = d.playtime;
}

Cd & Cd::operator=(const Cd &d){
	if (this == &d) return *this;
	strcpy(performers,d.performers);
	strcpy(label,d.label);
	selection = d.selection;
	playtime = d.playtime;
	return *this;
}

Classic::Classic(const Cd &cl,const char *clname):Cd(cl){
	strcpy(name,clname);
}

Classic &Classic::operator=(const Classic &cl){
	if (this == &cl) return *this;
	Cd::operator=(cl);
	strcpy(name,cl.name);
	return *this;
}

Classic::Classic(const char *s1, const char *s2, int n, double x,const char *str) : Cd(s1, s2, n, x){
	strcpy (name,str);
}

void Classic::Report() const{
	std::cout << performers << "\t" << label << "\t" << selection << "\t" << playtime << "\t" << name <<std::endl;
}

BaseDMA::BaseDMA(const char *l){
	label = new char[strlen(l)+1];
	strcpy(label,l);
}

BaseDMA::BaseDMA(const BaseDMA &bdm){
	label = new char[strlen(bdm.label)+1];
	strcpy(label,bdm.label);
}

std::ostream &operator<<(std::ostream &os, const BaseDMA &bdm){
	os << bdm.label;
	return os;
}

BaseDMA &BaseDMA::operator=(const BaseDMA &bdm){
	if (&bdm == this) return *this;
	label = new char[strlen(bdm.label)+1];
	strcpy(label,bdm.label);
	return *this;
}

BaseRAT::BaseRAT(const char *l, int n) : BaseDMA(l){
	rating = n;
}

std::ostream &operator<<(std::ostream &os, const BaseRAT &rdm){
	os << rdm.label << "\t" << rdm.rating;
	return os;
}

BaseRAT::BaseRAT(const BaseDMA &dma, const int r):BaseDMA(dma){
	rating = r;
}

BaseRAT &BaseRAT::operator=(const BaseRAT &rdm){
	if (&rdm == this) return *this;
	label = new char[strlen(rdm.label)+1];
	strcpy(label,rdm.label);
	rating = rdm.rating;
	return *this;
}

BaseNMA::BaseNMA(const char *l,const char *n):BaseDMA(l){
	name = new char[strlen(l)+1];	
	strcpy(name,n);
}

std::ostream &operator<<(std::ostream &os, const BaseNMA &ndm){
	os << ndm.label << "\t" << ndm.name;
	return os;
}

BaseNMA &BaseNMA::operator=(const BaseNMA &ndm){
	if (this == &ndm) return *this;
	label = new char[strlen(ndm.label)+1];
	strcpy(label,ndm.label);
	name = new char[strlen(ndm.name)+1];
	strcpy(name,ndm.name);
	return *this;
}

BaseNMA::BaseNMA(const BaseNMA &ndm){
	label = new char[strlen(ndm.label)+1];
	strcpy(label,ndm.label);
	name = new char[strlen(ndm.name)+1];
	strcpy(name,ndm.name);
}

Port::Port(const char * br, const char * st, int b){
	brand = new char[strlen(br)+1];
	strcpy(brand, br);
	strcpy(style,st);
	bottles = b;
}

void Port::Show()const{
	std::cout << "Brand: " << brand << std::endl;
	std::cout << "Kind: " << style << std::endl;
	std::cout << "Bottles: " << bottles << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Port &p){
	os << p.brand << ", " << p.style << ", " << p.bottles << std::endl;
	return os;
}

Port::Port(const Port &p){
	brand = new char[strlen(p.brand)+1];
	strcpy(brand, p.brand);
	strcpy(style, p.style);
	bottles = p.bottles;
}

Port &Port::operator=(const Port &p){
	if (this == &p) return *this;
	brand = new char[strlen(p.brand)+1];
	strcpy(brand, p.brand);
	strcpy(style, p.style);
	bottles = p.bottles;
	return *this;
}

Port &Port::operator+=(int b){
	bottles+=b;
	return *this;
}

Port &Port::operator-=(int b){
	if (bottles == 0 || (bottles - b) < 0) return *this;
	bottles-=b;
	return *this;
}

VintagePort::VintagePort(const char* br, int b, const char* nn, int y) : Port(br, "vintage", b){
	nickname = new char[strlen(nn)+1];
	strcpy(nickname, nn);
	year = y;
} 

void VintagePort::Show() const{
	std::cout << "Brand: " << brand << " Style: " << style << " Bottles: " << bottles << " Nickname: " << nickname
		<< " Year: " << year << std::endl;
}

std::ostream &operator<<(std::ostream& os, const VintagePort &vp){
	os << vp.brand << ", " << vp.style << ", " << vp.bottles << ", " << vp.nickname << ", " << vp.year << std::endl;
	return os;
}

// VintagePort::VintagePort(const VintagePort &vp){
// 	brand = new char[strlen(vp.brand)+1];
// 	strcpy(brand, vp.brand);
// 	strcpy(style, vp.style);
// 	bottles = vp.bottles;
// 	nickname = new char[strlen(nickname)+1];
// 	strcpy(nickname, vp.nickname);
// 	year = vp.year;
// }

VintagePort &VintagePort::operator=(const VintagePort &vp){
	if (this == &vp) return *this;
	brand = new char[strlen(vp.brand)+1];
	strcpy(brand, vp.brand);
	strcpy(style, vp.style);
	bottles = vp.bottles;
	nickname = new char[strlen(nickname)+1];
	strcpy(nickname, vp.nickname);
	year = vp.year;
	return *this;
}

