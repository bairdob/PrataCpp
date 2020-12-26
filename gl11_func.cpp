#include <cmath>
#include "gl11.h"  
namespace COMPLEX{
	void Complex::show(){
		std::cout << nat << ", " << mnim << std::endl;
	}
	std::ostream &operator<< (std::ostream &os,const Complex &c){
			os << c.nat << ", " << c.mnim;
			return os;
	}
	std::istream &operator>> (std::istream &in, Complex &c){
			in >> c.nat;
			in >> c.mnim;
			return in;
	}
	Complex Complex::operator+(Complex &c) const{
		return Complex(nat + c.nat,mnim+c.mnim);
	}
	Complex Complex::operator-(Complex &c) const{
		return Complex(nat - c.nat,mnim - c.mnim);
	}
	Complex Complex::operator*(Complex &c) const{
		return Complex(nat * c.nat - mnim * c.mnim, nat * c.mnim + mnim * c.nat);
	}
	Complex Complex::operator~() const{
		return Complex(nat,- mnim);
	}
	Complex Complex::operator*(double n) const{
		return Complex(nat*n,mnim*n);
	}
 
 }
