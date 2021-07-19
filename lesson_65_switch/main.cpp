#include <iostream>

enum Colors
{
	RED,
	GREEN, 
	BLUE
};


void printColor(Colors color)
{
	switch (color) {//помещаем значение
	case RED://каждый кейс проверяет
		std::cout << "This is Red" << std::endl;
		break;
	case GREEN:
		std::cout << "This is Green" << std::endl;
		break;
	case BLUE:
		std::cout << "This is Blue" << std::endl;
		break;
	}
}

int main()
{
	printColor(RED);


	std::cin.get();
	return 0;
}