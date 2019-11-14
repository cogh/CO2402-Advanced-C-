#include <iostream>
#include <string>
#include "CTest.h"

using namespace std;

int main() 
{
	CTest* test_data;

	int i = 4;
	test_data->call_by_copy(i);
	cout << i << endl;

	i = 4;
	test_data->call_by_reference(&i);
	cout << i << endl;

	i = 4;
	test_data->call_using_reference_parameter(i);
	cout << i << endl;

}