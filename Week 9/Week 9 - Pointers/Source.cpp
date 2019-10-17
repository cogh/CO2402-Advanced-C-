#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <algorithm>

using namespace std;

void change_int_pointer(int* param_int_pointer) {
	*param_int_pointer = 10;
}

void cancel(int* param_int_pointer_1, int* param_int_pointer_2) {
	int* smaller_pointer = min(param_int_pointer_1, param_int_pointer_2);
	*smaller_pointer = 0;
}


int main() {
	// Exercise 1
	int* int_pointer = new int(4);
	cout << *int_pointer << endl;
	change_int_pointer(int_pointer);
	cout << *int_pointer << endl;
	delete(int_pointer);

	// Exercise 2
	int* int_pointer_1 = new int(4);
	int* int_pointer_2 = new int(7);
	cout << "Int pointer 1: " << *int_pointer_1 << endl;
	cout << "Int pointer 2: " << *int_pointer_2 << endl;
	cancel(int_pointer_1, int_pointer_2);
	cout << "Int pointer 1: " << *int_pointer_1 << endl;
	cout << "Int pointer 2: " << *int_pointer_2 << endl;
	cout << endl << endl;

	// Stall
	system("pause");
}