#include<iostream>
using namespace std;
main () {
int num1;
int num2;
int num3;
int num4;
int mod1;
int mod2;
int mod3;
int mod4;
int sum;
cout << "Enter four digit number..." ;
cin >> num1;
mod1 = num1%10;
num2 = num1/10;
mod2 = num2%10;
num3 = num2/10;
mod3 = num3%10;
num4 = num3/10;
mod4 = num4%10;
sum = mod1+mod2+mod3+mod4;
cout << "Sum..." << sum; 
}