#include<iostream>
using namespace std;
main () {
int v1;
int v2;
int a;
int time;
cout << "Enter initial velocity.....";
cin >> v1;
cout << "Enter Acceleration";
cin >> a;
cout << "Enter time";
cin >> time ;
a = a*time+v1;
cout << "final velocity ....." << v2 ;
}