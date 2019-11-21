#pragma once
#include <Memory> 

class Memory
{
public:
	Memory();
	~Memory();
	int count;
	void* Memory::Allocate(size_t size);

	void Memory::Deallocate(void* ptr);

};

