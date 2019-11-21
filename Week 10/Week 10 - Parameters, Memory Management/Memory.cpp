#include "Memory.h"



Memory::Memory()
{
}


Memory::~Memory()
{
}

void* Memory::Allocate(size_t size)
{
	int* i = (int*)myMemory.Allocate(sizeof(int));
	count++;
	return malloc(size);
}

void Memory::Deallocate(void* ptr)
{
	count--;
	free(ptr);
}