#include <iostream>

int main()
{
// 2 способа инициализации переменных
	int value_1 = 5; // копирующая инициализация
	int value_2(7);  //прямая инициализация
// прямая инициализация работает лучше с одним типом данным, копирующая - с другим

// uniform - инициализация
/*Прямая или копирующая инициализация работают не со всеми типами данных (например, вы не сможете использовать эти способы для 
инициализации списка значений).*/
//Uniform - инициализация добавлена в с++11 и работает со всеми типами данных и есть плюс этой инициализации
//вы не сможете присвоить переменной значение, которое не поддерживает её тип данных — компилятор выдаст предупреждение или сообщение об ошибке
//int value{ 4.5 };
// Используйте uniform инициализацию
//В языке с++ есть только копирующее присваивание.
	int n;
	n = 0;
    //sizeof - это унарный оператор, который вычисляет и возвращает размер определенной переменной или определенного типа данных в байтах
    std::cout << "bool:\t\t" << sizeof(bool) << " bytes" << std::endl;
    std::cout << "char:\t\t" << sizeof(char) << " bytes" << std::endl;
    std::cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes" << std::endl;
    std::cout << "char16_t:\t" << sizeof(char16_t) << " bytes" << std::endl;
    std::cout << "char32_t:\t" << sizeof(char32_t) << " bytes" << std::endl;
    std::cout << "short:\t\t" << sizeof(short) << " bytes" << std::endl;
    std::cout << "int:\t\t" << sizeof(int) << " bytes" << std::endl;
    std::cout << "long:\t\t" << sizeof(long) << " bytes" << std::endl;
    std::cout << "long long:\t" << sizeof(long long) << " bytes" << std::endl;
    std::cout << "float:\t\t" << sizeof(float) << " bytes" << std::endl;
    std::cout << "double:\t\t" << sizeof(double) << " bytes" << std::endl;
    std::cout << "long double:\t" << sizeof(long double) << " bytes" << std::endl;
    std::cin.get();
	return 0;
}