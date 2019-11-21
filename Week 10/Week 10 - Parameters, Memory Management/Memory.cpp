#include "Count.h"



Count::Count()
{
}


Count::~Count()
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