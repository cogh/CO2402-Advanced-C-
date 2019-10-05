#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main() {
	// Exercise 1
	cout << "Exercise 1:" << endl;
	vector<int> vector_1;
	vector_1.push_back(3);
	vector_1.push_back(5);
	vector_1.push_back(7);
	vector_1.push_back(14);
	vector<int>::iterator it_1;
	for (int i = 0; i < vector_1.size(); i++)
	{
		cout << vector_1[i] << " ";
	}
	cout << endl << endl;

	// Exercise 2
	cout << "Exercise 2:" << endl;
	vector<int> vector_2;
	vector_2.push_back(3);
	vector_2.push_back(5);
	vector_2.push_back(7);
	vector_2.push_back(14);
	vector<int>::iterator it_2;
	for (it_2 = vector_2.begin(); it_2 != vector_2.end(); it_2++)
	{
		cout << *it_2 << " ";
	}
	cout << endl << endl;

	//Exercise 3: Count instances
	cout << "Exercise 3: Count instances" << endl;
	vector<int> vector_3;
	vector_3.push_back(3);
	vector_3.push_back(7);
	vector_3.push_back(4);
	vector_3.push_back(7);
	vector_3.push_back(3);
	vector<int>::iterator it_3;
	for (it_3 = vector_3.begin(); it_3 != vector_3.end(); it_3++)
	{
		cout << *it_3 << " ";
	}
	cout << endl;
	cout << "Which number to count?";
	int number_to_count;
	cin >> number_to_count;
	int times_number_appears = 0;
	for (it_3 = vector_3.begin(); it_3 != vector_3.end(); it_3++)
	{
		if (*it_3 == number_to_count) {
			times_number_appears++;
		}
	}
	cout << "Times number appeared: " << times_number_appears;
	cout << endl << endl;

	// Exercise 4

	// One, two, miss a few . . .

	// Exercise 6: sizeof
	cout << "Exercise 6: sizeof" << endl;
	cout << "Size of char: " << sizeof(char) << endl;
	cout << "Size of int: " << sizeof(int) << endl;
	cout << "Size of float: " << sizeof(float) << endl;
	cout << "Size of double: " << sizeof(double) << endl;
	int float_array[50];
	cout << "Size of 50-float-long array: " << sizeof(float_array) << endl;
	cout << endl << endl;

	// Exercise 7
	cout << "Exercise 7: Memory allocation of a known type" << endl;
	int* dynamic_int = new int;
	*dynamic_int = 4;
	cout << "dynamic int value: " << *dynamic_int;
	delete(dynamic_int);
	cout << endl << endl;

	// Exercise 8: cat structure
	cout << "Exercise 8: cat structure" << endl;
	struct Cat {
		string name;
		int age;
		Cat(string param_name, int param_age) {
			name = param_name;
			age = param_age;
		}
	};
	Cat* cat_instance = new Cat("Felix", 8);
	cout << "Cat's name: " << cat_instance->name << endl;
	cout << "Cat's age: " << cat_instance->age << endl;
	cout << "Cat ages a year" << endl;
	cat_instance->age++;
	cout << "Cat's age: " << cat_instance->age << endl;
	cout << endl << endl;
	delete(cat_instance);

	// Exercise 9
	cout << "Exercise 9: memory leak" << endl;


	// Stall
	system("pause");
}