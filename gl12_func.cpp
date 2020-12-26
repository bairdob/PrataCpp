//gl12_func.cpp
#include "gl12.h"
void Cow::show() const{
	std::cout << name << "\t" << hobby << "\t" << weight << std::endl;
}
Cow::Cow(const char *nm, const char* ho, double wt){
	strcpy(name,nm);
	hobby = new char[strlen(ho)];
	strcpy(hobby,ho);
	weight = wt;
}
Cow::Cow(const Cow &c){
	strcpy(name,c.name);
	hobby = new char[strlen(c.hobby)+1];
	strcpy(hobby,c.hobby);
	weight = c.weight; 
}
Cow & Cow::operator=(const Cow &c){
	if (this == &c) return *this;
	strcpy(name,c.name);
	hobby = new char[strlen(c.hobby)+1];
	strcpy(hobby,c.hobby);
	weight = c.weight;
	return *this;
}
Stock::Stock(){
	company = new char[5];
	strcpy(company,"name");
	shares = share_val = 0;
	set_tot();
}
Stock::Stock(const char* co,long n, double pr){
	company = new char[strlen(co)+1];
	strcpy(company,co);
	shares = n;
	share_val = pr;
	set_tot();

}
std::ostream &operator<<(std::ostream &os , const Stock &s){
	os << s.company << "\t" << s.shares << "\t" << s.share_val << "\t" << s.total_val;
	return os;
}
bool Stack::push(const Item &item){
	if (top < size) {
		pitems = new Item;
		*pitems = item;
		top++;
		std::cout << item << " pushed" << std::endl;
		return true;
		} else return false;
}

// bool Stack::pop(Item &item){
// 	if (top > 0){
// 		*pitems = item;
// 		top--;
// 		return true;
// 	} else return false;
// }