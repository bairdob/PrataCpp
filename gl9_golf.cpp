//golf.cpp
void setgolf(golf &g, const char *name,int hc){
	strcpy(g.fullname, name);
	g.handicap = hc;
}
int setgolf(golf &g){
	char name[LEN];
	std::cout << "Enter name: ";
	std::cin.get(name,LEN);
	std::cin.get();
	if (strlen(name) == 0) 	return 1;
	strcpy(g.fullname,name);
	int handicap;
	std::cout << "Enter handicap: ";
	std::cin >> handicap;
	g.handicap = handicap;
	std::cin.get();
	return 0;
}
void showgolf(const golf &g){
	std::cout << g.fullname << "\t" << g.handicap << std::endl;
}
void handicap(golf &g, int hc){
	g.handicap = hc;
}