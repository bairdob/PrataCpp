//gl14.cpp
#include <iostream>
#include <cstring>
#include "gl13_func.cpp"
using std::cout;
using std::endl;
void Bravo(const Cd &disk){
	disk.Report();
}
int main(){
	// Classic cl1("clname","cllabel", 2,3,"clname1");
	// cl1.Report();
	// Cd c1 ("cname", "clabel", 2, 4);
	// c1.Report();
	// Cd *pcd = &c1;
	// pcd->Report();
	// Classic cl2(c1,"namecl2");
	// cl2.Report();
	// Classic copy;
	// copy = cl2;
	// copy.Report();
	// std::cout << std:: endl;
	// Bravo(c1);

	// BaseDMA bdm1("name3");
	// BaseDMA bdm2;
	// bdm2 = bdm1;
	// std::cout << bdm2;
	// BaseDMA dma;
	// cout << dma << endl;
	// BaseRAT rat1(dma,3);
	// cout << rat1 << endl;
	// BaseRAT rat2;
	// cout << rat2 << endl;
	// rat2 = rat1;
	// cout << rat2 << endl << endl;
	// rat1.View();

	// BaseNMA nma1("newl","newn");
	// cout << nma1 << endl;
	// BaseNMA nma2;
	// nma2 = nma1;
	// nma2.View();
	Port p1("name1","style1",1);
	p1.Show();
	cout << p1;
	Port p2;
	p2 = p1;
	p2-=1;
	cout << p2;
	cout << p1.BottleCount() << endl;
	VintagePort vp1("Vodka",1,"Putinka", 2020);
	vp1.Show();
	cout << vp1;
	VintagePort vp2;

	vp2 = vp1;
	cout << vp2;
	return 0;
}