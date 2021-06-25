#include <iostream>

int readNumber()
{
    std::cout << "¬ведите целое число" << std::endl;
    int x = 0;
    std::cin >> x;
    return x;
}

void writeAnswer(int x, int y)
{
    std::cout << x << " + " << y << " = " << x + y << std::endl;

}