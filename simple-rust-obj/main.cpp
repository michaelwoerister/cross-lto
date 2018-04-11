

#include <cstdint>
#include <iostream>


extern "C" {
	int32_t foo(int32_t x);
}

int main(int argc, char* argv[]) {

	std::cout << foo(2) << std::endl;

	return 0;
}