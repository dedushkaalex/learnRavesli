#include <iostream>

void doMath(int a)  // определяем и объявляем функцию doMath, принимает параметр целочисл типа с названием a
{
    int b = 5;  // инициализируем локальную переменную b значением 5
    std::cout << "doMath: a = " << a << " and b = " << b << std::endl;
    a = 4; // переопределяем переменную a значением 4.
    std::cout << "doMath: a = " << a << " and b = " << b << std::endl;
}



int main()
{
    int a = 6;  // инициализируем переменную a значением 6
    int b = 7; //инициализируем переменную b значением 7
    std::cout << "main: a = " << a << " and b = " << b << std::endl;    // 6 7
    doMath(a);  //4
    std::cout << "main: a = " << a << " and b = " << b << std::endl;    //6 7
    std::cin.get();
}
