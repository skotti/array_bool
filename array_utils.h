#include <stdio.h>
#include <string.h>
/*void* operator new[] (std::size_t size) {
	void* mem = malloc(size);//operator new[] (size);
	memset(mem, 0, size);
	return mem;
}

void* operator new[] (std::size_t size, int val) {
	void* mem = malloc(size);//operator new[] (size);
	memset(mem, val, size);
	return mem;
}

void operator delete[] (void* ptr) noexcept{
	free(ptr);
}

void operator delete[] (void* ptr, size_t) noexcept{
	free(ptr);
}*/