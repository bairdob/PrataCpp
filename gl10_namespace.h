//gl10_namespace.h
#include <iostream>
#ifndef BANK_H_
#define BANK_H_

class BANK{
private:
	std::string name;
	std::string number;
	double balance;
public:	
	BANK();
	BANK(const std::string &str, const std::string &n, double m);
	~BANK();
	void show();
	void add(double n);
	void take(double n);
};

class Person{
private:
	static const int  LIMIT =25;
	std::string lname;
	char fname[LIMIT];
public:
	Person();
	Person(const std::string &ln, const char* fn = "Heyyou");
	void show() const;
	void formalshow() const;
};

class Golf{
private:
	static const int LEN = 40;
	char fullname[LEN];
	int handicap;
public:
	Golf(){fullname[0] = 'a', handicap = 0;};
	Golf(const char *fn, int n = 0);
	//const Golf &setgolf(const Golf &g, char *fn, int n)const;
	void sethandicap(int n);
	void show() const;
};

class Sales{
private:
	static const int QUARTERS = 4;
	double sales[QUARTERS];
	double average;
	double max;
	double min;
public:
	Sales();
	void show() const;
	void set(double *arr,int n);
	void set();
};

class Move{
private:
	double x;
	double y;
public:
	Move(double a = 0, double b = 0){x = a; y = b;};
	void show()const;
	void add(const Move &m);
	void reset(double a = 0, double b = 0){x = a; y = b;};
};

class Betelgeize{
private:
	static const int LEN = 19;
	char name[LEN];
	int ci;
public:
	Betelgeize(){strcpy(name,"Plorga") ;  ci = 50;};
	Betelgeize(const char *str, int n = 50);
	Betelgeize add(const Betelgeize &b);
	void show()const;
	void set(int n);
};
#endif