#include <iostream>
#include <string>
#include <vector>

using namespace std;

void change_int_pointer(int* param_int_pointer) {
	*param_int_pointer = 10;
}

void PassByRefrance(int& var)
{

}

void FakePassByRefrance(int* pvar)
{
	int& var = *pvar;

	var++;


}


//Spooky
template<class T>
void Spooky(T something)
{
	std::cout << something << std::endl;
}


template<class T, class W, class ...Args>
void Spooky(T t, W w, Args... args)
{
	Spooky(t);
	Spooky(w, args...);
}



int main() {


	//Spooky(1);
	//Spooky("tset");


	Spooky(1, "asad", 3, "Hello wolrd");
	//Spooky(1, "asdasd", 3);


	system("pause");
	exit(0);
	// Exercise 1
	/*int* int_pointer = new int(4);
	cout << *int_pointer << endl;
	change_int_pointer(int_pointer);
	cout << *int_pointer << endl;
	delete(int_pointer);

	// Exercise 2

	int a = 10;

	PassByRefrance(a);
	PassByRefrance(nullptr);


	FakePassByRefrance(&a);
	FakePassByRefrance(nullptr);



	*/
	// Stall
	system("pause");
}