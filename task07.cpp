#include<iostream>
using namespace std;
main () {
string movie;
float adult;
float child;
float adult_ticket;
float child_ticket;
float total;
float final;
float donation;
float percentage;
cout << "Enter movie name...";
cin >> movie;
cout << "Enter Adult ticket price...";
cin >> adult;
cout << "Enter child ticket price...";
cin >> child;
cout << "Enter number of adults ticket sold...";
cin >> adult_ticket;
cout << "Enter number of child ticket sold...";
cin >> child_ticket;
cout << "Enter Percentage donated to charity...";
cin >> percentage;
total = (adult_ticket*adult)+(child_ticket*child);
donation = (percentage/100)*total;
final = total-donation;
cout << "Total amount generated...." << total << endl;
cout << "Amount after donation..." << final;
}