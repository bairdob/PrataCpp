//gl14.h
#include <iostream>
class Cd{
protected:
	char performers[50];
	char label[20];
	int selection;
	double playtime;
public:
	Cd(){performers[0] = '0'; label[0] = '\0'; selection = 2; playtime = 3.0;};
	Cd(const char *s1, const char *s2, int n, double x);
	Cd(const Cd &d);
	~Cd(){};
	virtual void Report() const;
	Cd &operator=(const Cd &d);
};
class Classic : public Cd{
private:
	char name[50];
public:
	Classic(){performers[0] = '0'; label[0] = '\0'; selection = 2; playtime = 3.0; name[0] = '2';};
	Classic(const char *s1, const char *s2, int n, double x,const char *str);
	Classic(const Cd &cl, const char *name);
	virtual void Report() const;
	Classic &operator=(const Classic &cl);
	
};
class BaseDMA{
protected:
	char *label;
public:
	BaseDMA(const char *l = "no namel");
	BaseDMA(const BaseDMA &bdm);
	~BaseDMA(){delete []label;};
	virtual void View(){std::cout << label;};
	BaseDMA &operator=(const BaseDMA &bdm);
	friend std::ostream &operator<<(std::ostream &os, const BaseDMA &bdm);
};
class BaseRAT : public BaseDMA{
private:
	int rating;
public:
	BaseRAT(const char *l = "no namel",const int r = 0);
	BaseRAT(const BaseDMA &dma, const int r = 0);
	~BaseRAT(){};
	virtual void View(){std::cout << label << "\t" << rating;};
	BaseRAT &operator=(const BaseRAT &rdm);
	friend std::ostream &operator<<(std::ostream &os, const BaseRAT &dm);
};
class BaseNMA : public BaseDMA{
private:
	char *name;
public:
	BaseNMA(const char *l = "no namel",const char *n = "no name");
	BaseNMA(const BaseNMA &ndm);
	~BaseNMA(){delete []name;};
	virtual void View(){std::cout << label << "\t" << name;};
	BaseNMA &operator=(const BaseNMA &ndm);
	friend std::ostream &operator<<(std::ostream &os, const BaseNMA &ndm);
};

class Port{
protected:
	char* brand;
	char style[20];
	int bottles;
public:
	Port(const char *br = "none", const char *st = "none", int b = 0);
	Port(const Port &p);
	virtual	~Port(){delete []brand;};
	Port &operator=(const Port & p);
	Port &operator+=(int b);
	Port &operator-=(int b);
	int BottleCount()const {return bottles;};
	virtual	void Show() const;
	friend std::ostream &operator<<(std::ostream & os, const Port &p);
};
class VintagePort : public Port{
private:
	char *nickname;
	int year;
public:
	VintagePort(const char* br = "nonev", int b = 0, const char* nn = "nonev", int y = 1000);
	// VintagePort(const VintagePort &vp);
	virtual ~VintagePort(){delete []nickname;};
	VintagePort &operator=(const VintagePort &vp);
	virtual void Show() const;
	friend std::ostream &operator<<(std::ostream& os, const VintagePort &vp);
};