#include <iostream>
using namespace std;

// Definition for a simple counter
class Counter
{
	private:
		int amount; // stores the current count value

	public:
		void set( int number ); // set count to the value of number
		int get(); // get the current value of amount
		void increment();  // increment count by 1 (trivial)
};

// set count to the value of number
void Counter::set( int number )
{
    amount = number;
}

 // get the current value of amount
int Counter::get()
{
    return amount;
}

// increment count by 1 (trivial)
void Counter::increment()
{
    amount++;
}

int main()
{
	Counter* myCount = new Counter; // declare object of type Counter

    myCount->set( 3 );
	myCount->increment();
	int n = myCount->get();
	cout << n << endl;
  
	system("pause");
}
