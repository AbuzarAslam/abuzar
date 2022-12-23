#include<iostream>
using namespace std;
main () {
int size;
int cost;
int area;
int fertilizer;
int farea;
cout << "enter size of bag in pounds...";
cin >> size;
cout << "Enter cost of bag...";
cin >> cost;
cout << "Enter Area.....";
cin >> area; 
fertilizer = cost/size;
farea = cost/area;
cout << "Cost of fertilizer per pound...." << fertilizer << endl;
cout << "Cost of fertilizing area per square...." << farea;

}