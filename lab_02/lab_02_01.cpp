#include <iostream> 
using namespace std;

int main() {

	double fuel1, fuel2, fuel3, fuel4, StartJdjmeter, EndOdometer;


	cout << "Number 1 gas station (1) ";
	cin >> fuel1;
	cout << "Number 2 gas station (1) ";
	cin >> fuel2;
	cout << "Number 3 gas station (1)";
	cin >> fuel3;
	cout << "Number 4 gas station (1) ";
	cin >> fuel4;
	cout << "Start odometer reading (km): ";
	cin >> StartJdjmeter;
	cout << "End odometer reading (km): ";
	cin >> EndOdometer;

	double totalFuel = fuel1 + fuel2 + fuel3 + fuel4;
	double distance = EndOdometer - StartJdjmeter;
	double fuelConsumption = totalFuel / distance;

	cout << "\n=======Results=======" << endl;
	cout << "Total fuel consumed: " << totalFuel << " l" << endl;
	cout << "Distance traveled: " << distance << " km" << endl;
	cout << "Fuel consumption: " << fuelConsumption << " l/km" << endl;

	return 0;

}
