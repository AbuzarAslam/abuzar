#include<iostream>
using namespace std;
main () {
string name;
int sub1;
int sub2;
int sub3;
int sub4;
int sub5;
int sum;
float percentage;
cout << "Enter name... ";
cin >> name;
cout << "Enter subject1 marks" ;
cin >> sub1;
cout << "Enter subject2 marks" ;
cin >> sub2;
cout << "Enter subject3 marks" ;
cin >> sub3;
cout << "Enter subject4 marks" ;
cin >> sub4;
cout << "Enter subject5 marks" ;
cin >> sub5;
sum = sub1+sub2+sub3+sub4+sub5;
percentage = (sum/500.0)*100;
cout << "Your percentage is ....." << percentage;
}