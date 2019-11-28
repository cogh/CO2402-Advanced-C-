#include "Memory.h"



Memory::Memory()
{
	count = 0;
}


Memory::~Memory()
{
}

void* Memory::Allocate(size_t size)
{
	count++;
	return malloc(size);
}

void Memory::Deallocate(void* ptr)
{
	count--;
	free(ptr);
}

int Memory::get_count() {
	return count;
}