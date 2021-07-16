#include "struct.h"
#include <iostream>

int main()
{
	IdentificationUsers alex = { 123, "hel2ok",12.519 };
	std::cout << alex.uuid << std::endl;


	std::cin.get();
	return 0;
}