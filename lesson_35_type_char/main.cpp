#include <iostream>
#include <windows.h>

// char - целочисленный тип данных, но он конвертирует число в ascii - символ. Также можно и символы передавать.
// Если хотим вывести номер таблицы ascii лучшим способом будет использование оператора static_cast
int main()
{
	//char ch{1};
	//std::cout << ch << std::endl;
	//static_cast - оператор для конвертации из одного типа данных в другой.
	//static_cast<новый_тип_данных>(выражение)
	//std::cout << static_cast<int>(ch) << std::endl; //выведет 1
	setlocale(LC_ALL, "ru");
	//char ch{ 0 };
	//std::cout << "Введите символ:\n" << ">>> ";
	//std::cin >> ch;
	//std::cout << "В таблице ascii символ " << ch << " будет под номером " << static_cast<int>(ch) << std::endl;
	//std::cout << "Input a keyboard character: "; // предположим, что пользователь ввел abcd

	//char ch;
	//std::cin >> ch; // ch = 'a', "bcd" останется во входном буфере
	//std::cout << ch << " has ASCII code " << static_cast<int>(ch) << std::endl;

	// Обратите внимание, следующий cin не просит пользователя что-либо ввести, данные берутся из входного буфера!
	//std::cin >> ch; // ch = 'b', "cd" останется в буфере
	//std::cout << ch << " has ASCII code " << static_cast<int>(ch) << std::endl;
	system("pause");

}
