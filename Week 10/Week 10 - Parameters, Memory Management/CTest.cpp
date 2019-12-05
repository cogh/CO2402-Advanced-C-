#include "CTest.h"



CTest::CTest()
{
	m_data = 0;
}

CTest::CTest(int arg_data)
{
	m_data = arg_data;
}

void CTest::set_data() {
	m_data = 5;
}

void CTest::call_by_reference(int* arg_data)
{
	*arg_data = m_data;
}

void CTest::call_by_copy(int& arg_data)
{
	arg_data = m_data;
}

void CTest::call_using_reference_parameter(int arg_data)
{
	arg_data = m_data;
}

CTest::~CTest()
{

}
