//gl12.h
#include <cstring>
#include <iostream>
class Cow{
private:
	char name[20];
	char * hobby;
	double weight;
public:
	Cow(){name[0] = '1'; hobby = new char[5]; std::strcpy(hobby,"hobby"); weight = 0;};
	Cow(const char *nm, const char* ho, double wt);
	Cow(const Cow &c);//конструктор копирования
	~Cow(){delete []hobby;};
	Cow & operator=(const Cow &c);
	void show()const;	
};
class Stock{
private:
	char *company;
	int shares;
	double share_val;
	double total_val;
	void set_tot(){total_val = shares * share_val;};
public:
	Stock();
	Stock(const char* co,long n = 0, double pr = 0);
	~Stock(){delete []company;};
	friend std::ostream &operator<<(std::ostream &os , const Stock &s);
};
#define Item int
class Stack{
private:
	enum{MAX = 10};
	Item *pitems;
	int size;
	int top;
public:
	Stack(int n = 10){size = n; top = 0;};
	Stack(const Stack &st);
	~Stack(){delete pitems;};
	bool isempty() const{return top == 0;};
	bool isfull() const{return top == MAX;};
	bool push(const Item &item);
	//bool pop(Item &item);
	Stack &operator=(const Stack &st);
};