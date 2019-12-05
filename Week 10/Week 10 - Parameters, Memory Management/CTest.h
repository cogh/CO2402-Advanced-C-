#pragma once
class CTest
{
public:
	int m_data;
	void set_data();
	void call_by_reference(int* arg_data);
	void call_by_copy(int& arg_data);
	void call_using_reference_parameter(int arg_data);
	CTest();
	CTest(int arg_data);
	~CTest();
};

