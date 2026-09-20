#include <iostream>
using namespace std;

int main()
{
    double scale = 0.25;
    double d1_cm = 1.5;
    double d2_cm = 2.3;
    double d3_cm = 5.9;
    double d4_cm = 4.0;

    double d1_km = (int((d1_cm * scale) * 10.0 + 0.5)) / 10.0;
    double d2_km = (int((d2_cm * scale) * 10.0 + 0.5)) / 10.0;
    double d3_km = (int((d3_cm * scale) * 10.0 + 0.5)) / 10.0;
    double d4_km = (int((d4_cm * scale) * 10.0 + 0.5)) / 10.0;

    double total_path = d1_km + d2_km + d3_km + d4_km;

    cout << "distance 1=" << d1_km << "km" << endl;
    cout << "distance 2=" << d2_km << "km" << endl;
    cout << "distance 3=" << d3_km << "km" << endl;
    cout << "distance 4=" << d4_km << "km" << endl;
    cout << "total path=" << total_path << "km" << endl;

    return 0;
}

