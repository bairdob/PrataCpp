//sales.cpp
namespace SALES{
	void setSales(Sales &s, const double ar[],int n){
		double average = 0;
		double min = ar[0];
		double max = ar[0];
		for (int i = 0; i < n; i++) {
			s.sales[i] = ar[i];
			if (ar[i] < min) min = ar[i];
			if (ar[i] > max) max = ar[i];
			average += ar[i];
		}
		s.average = average;
		s.min = min;
		s.max = max;
	}
	void setSales(Sales &s){
		double average = 0;
		double min = s.sales[0];
		double max = s.sales[0];
		for (int i = 0; i < QUARTERS; i++) {
			if (s.sales[i] < min) min = s.sales[i];
			if (s.sales[i] > max) max = s.sales[i];
			average += s.sales[i];
		}
		s.average = average;
		s.min = min;
		s.max = max;
	}
	void showSales(const Sales &s){
		for (int i = 0; i < QUARTERS; i++) std::cout << s.sales[i] << " "; 
		std::cout << std::endl;
		std::cout << "Average = " << s.average << std::endl;
		std::cout << "Max = " <<s.max << std::endl;
		std::cout << "Min = "<<s.min << std::endl;
	}

}