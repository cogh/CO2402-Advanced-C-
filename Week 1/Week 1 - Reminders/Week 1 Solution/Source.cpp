#include <iostream>
#include <string>
using namespace std;

int cube_integer(int param_int) {
	return param_int * param_int * param_int;
}

void gbp_to_usd() {
	string input;
	int pounds;
	int dollars;
	cout << "How many pounds to convert into dollars?";
	cin >> input;
	cout << endl;
	pounds = stoi(input);
	dollars = pounds * 1.5;
	cout << to_string(pounds) << " pounds is equal to " << to_string(dollars) << " dollars" << endl << endl;
}

void celsius_to_fahrenheit() {
	string input;
	float celsius;
	float fahrenheit;
	cout << "Temperature in Celsius: ";
	cin >> input;
	cout << endl;
	celsius = stof(input);
	fahrenheit = (celsius*9/5) + 32;
	cout << to_string(celsius) << " Celsius is equal to " << to_string(fahrenheit) << " Fahrenheit" << endl << endl;
}

struct Student {
	string name;
	float mark;
};

int main() {
	// Exercise 1 - Display ints 1-10
	for (int i = 1; i <= 10; i++) {
		cout << i;
	}
	cout << endl << endl;

	// Exercise 2 - Addition under 100
	int added_number = 0;
	string first_number;
	string second_number;
	while (added_number <= 100) {
		// Get input
		cout << "First number: ";
		cin >> first_number;
		cout << endl;
		cout << "Second number: ";
		cin >> second_number;
		cout << endl;
		// Add numbers
		added_number = stoi(first_number) + stoi(second_number);
		// Show added number
		cout << to_string(added_number);
		cout << endl << endl;
	}

	// Exercise 3 - GBP to USD conversion function
	gbp_to_usd();

	// Exercise 4 - Converting Celsius to Fahrenheit
	celsius_to_fahrenheit();

	// Exercise 5 - Obtaining the cube of a number
	string input;
	int number_to_cube;
	int cubed_number;
	cout << "Number to cube: ";
	cin >> input;
	number_to_cube = stoi(input);
	cubed_number = cube_integer(number_to_cube);
	cout << number_to_cube << " cubed: " << cubed_number << endl << endl;

	// Exercise 6 - Student marks
	Student student;
	cout << "Student name: ";
	cin >> student.name;
	cout << endl;
	cout << "Student mark: ";
	cin >> student.mark;
	cout << endl;
	cout << "Student is named " << student.name << " and has a mark of " << to_string(student.mark) << endl << endl;
}