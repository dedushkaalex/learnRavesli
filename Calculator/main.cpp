#include <iostream>
#include "getUserInput.h"
#include "getMathematicalOperation.h"
#include "calculateResult.h"
int main()
{
	setlocale(LC_ALL, "ru");
	int a = getUserInput();
	int b = getMathematicalOperation();
	int c = getUserInput();
	int n = calculateResult(a,b,c);
	std::cout << n<<std::endl;
	std::cin.get();
}