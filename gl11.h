//gl11.h
#ifndef COMPLEX_H_
#define COMPLEX_H_
#include <iostream>
namespace COMPLEX{
	class Complex{
	private:
		double nat;
		double mnim;
	public:
		Complex(double n = 0,double m = 0){nat = n; mnim = m;};
		void show();
		Complex operator+(Complex &c) const;
		Complex operator-(Complex &c) const;
		Complex operator*(Complex &c) const;
		Complex operator~() const;
		Complex operator*(double n) const;
		friend std::ostream &operator<<(std::ostream &os,const Complex &c);
		friend std::istream &operator>>(std::istream &in, Complex &c);

};
}
#endif