#include<iostream>
using namespace std;
main() {
float aggregate;
string name;
cout << "Enter your name";
cin >> name;
int matric;
cout << "Enter matric marks";
cin >> matric;
int inter;
cout << "Enter inter marks";
cin >> inter;
int ecat;
cout << "Enter ecat marks";
cin >> ecat;
float matric_percentage;
float inter_percentage;
float ecat_percentage;
matric_percentage = matric*10/1100.0;
inter_percentage = inter*40/1100.0;
ecat_percentage = ecat*50/1100.0;
aggregate = matric_percentage + inter_percentage + ecat_percentage;
cout << "Your aggregate is..... " << aggregate;
}
