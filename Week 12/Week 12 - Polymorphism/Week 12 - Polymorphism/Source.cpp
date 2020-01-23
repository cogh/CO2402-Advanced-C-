#include <iostream>
#include <string>

class CTest
{
public:
	virtual void WriteMessage();
};

void CTest::WriteMessage()
{

}

class CMessage1 : public CTest {
public:
	void WriteMessage() {
		std::cout << "From message 1." << std::endl;
	}
};

class CMessage2 : public CTest {
public:
	void WriteMessage() {
		std::cout << "From message 2." << std::endl;
	}
};

int main() {
	CTest* pMessages[4];
	pMessages[0] = new CMessage1;
	pMessages[1] = new CMessage2;
	pMessages[2] = new CMessage1;
	pMessages[3] = new CMessage2;

	for (int i = 0; i < 4; i++)
	{
		pMessages[i]->WriteMessage();
	}

	std::string stall;
	std::cin >> stall;

}