//ISD-TEMPLATE CPP FILE. PROF. WEI FANG V1
#include "std_lib_facilities.h"

int main() {
/*
	cout << "pls enter a floating-point number:";
	double n;
	cin >> n;
	cout << "n=" << n
		<< "\nn+1=" << n + 1
		<< "\n3 times n=" << n * 3
		<< "\ntwice n =" << n * 2
		<< "\nn suqared=" << n * n
		<< "\nhalf of n=" << n / 2
		<< "\nsquare root of n=" << sqrt(n)
		<<"\n";

	cout << "pls enter your first name(followed" << "by'Enter':\n";
	string first_name;
	cin >>first_name;
	cout << "hello," << first_name << ".\n";
*/
	const double cm2inch = 2.54;
	double val;
	char unit;
	while (cin >> val >> unit) {
		if (unit == 'i')
			cout << val << " in = " << val * cm2inch << " cm\n"; 
		else if (unit == 'c')
			cout << val << " cm = " << val / cm2inch << " in\n"; 
		else cout<<"the unit you typed is unsupported, pls try again\n";
	}
	return 0;
	
}