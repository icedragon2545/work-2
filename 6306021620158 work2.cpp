#include <iostream>
#include <string>
using namespace std;

void main(){

	string firstname, lastname;
	short salary, sale, percent, total;

	cout << "****Homework 2************" << endl;
	
	cout << "Enter Name : ";
	cin >> firstname >> lastname;
	
	cout << "Enter Salary : ";
	cin >> salary;
	
	cout << "Enter Sale : ";
	cin >> sale;
	
	cout << "Commission Percent : ";
	cin >> percent;

	total = (sale*percent/100)+salary;

	cout << "- - - - - -output - - - - - - - - - -" << endl;
	
	cout << "Your name = " << firstname << " " << lastname << endl;
	cout << "Total Revenue " << total << " Bath" << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	// Burapha Suriwan 6306021620158 no.28
	
	system("pause");
}