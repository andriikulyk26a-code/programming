

#include <iostream>
using namespace std;

int main() {
	double width = 30.0;
	double length = 40.0;
	double floors = 2.5;
	double non_residential_area = 825.0;
	double price = 150000.0;
	double living_area = width * length * floors - non_residential_area;

	cout << price / living_area;

	return 0;
}

   

