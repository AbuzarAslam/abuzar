#include<iostream>
using namespace std;
main () {
float vegetable_price;
float fruit_price;
int vegetable;
int fruit;
int vegetable_cost;
int fruit_cost;
cout << "Enter vegetable price per kg .....";
cin >> vegetable_price;
cout << "Enter fruit price per kg";
cin >> fruit_price;
cout << "Enter total kilogram of vegetable...";
cin >> vegetable;
cout << "Enter total kilogram of fruit";
cin >> fruit;
vegetable_cost = 1.94*vegetable_price*vegetable;
fruit_cost = 1.94*fruit_price*fruit;
cout << "vegetable cost...." << vegetable_cost << endl;
cout << "fruit cost ...." << fruit_cost;
}