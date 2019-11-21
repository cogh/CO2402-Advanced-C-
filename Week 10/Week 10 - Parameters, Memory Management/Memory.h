#pragma once
#include <Memory> 

class Count
{
public:
	Count();
	~Count();
	int count;
	void* Memory::Allocate(size_t size);

	void Memory::Deallocate(void* ptr);

};

