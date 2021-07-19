#include <iostream>
#include <typeinfo> //шобы посмотреть какой тип данных у выражения\переменной


/*
Виды лейблов:
1) case - который объявляется с использованием ключевого слова [case <Константное выражение>:].Константное выражение проверяется на равенство
с выражением, объявленное в switch(<выражение>). Все выражения case должны быть уникальными.

2) default case - код под этим лейблом выполняется, если ни один case не соответствует выражению switch.Обычно объявляют последним в блоке switch

*/

/*
Каверзные вещи в switch:
1) Последовательность выполнения кода. Когда кейс совпал(или default), то выполнение начинается с первого стейтмента,пока не будет выполнено одно из усл-ий:
	---достигнут конец блока switch
	---Выполняется return
	---выполняется goto
	---выполняется break


*/

/*
Операторы Switch-кейсов:
1) break - выполнил кейс - выйти из switch'а.
2)


*/

enum class Animal
{
	PIG,
	CHICKEN,
	GOAT,
	CAT,
	DOG,
	OSTRICH
};

void getAnimalName(Animal animal)
{
	switch (animal)
	{
	case Animal::PIG:
		std::cout << "pig";
		break;
	case Animal::CHICKEN:
		std::cout << "chicken";
		break;
	case Animal::GOAT:
		std::cout << "goat";
		break;
	case Animal::CAT:
		std::cout << "cat";
		break;
	case Animal::DOG:
		std::cout << "dog";
		break;
	case Animal::OSTRICH:
		std::cout << "ostrich";
		break;
	
	default:
		std::cout << "Error broooo:)";
		break;
	}
}

void printNumberOfLegs(Animal animal)
{
	switch (animal)
	{
	case Animal::PIG:
	case Animal::GOAT:
	case Animal::CAT:
	case Animal::DOG:
		std::cout << "A ";
		getAnimalName(animal);
		std::cout << " has 4 legs\n";
		break;
	case Animal::OSTRICH:
	case Animal::CHICKEN:
		std::cout << "A ";
		getAnimalName(animal);
		std::cout << " has 2 legs\n";
		break;
	default:
		break;
	}


}

auto calculate(int numberOne, int numberTwo, char typeOfMathOperation) //char - + - * / %
{
	double resultMathOperation{ 0 };
	switch (typeOfMathOperation)
	{
	case '+':
		resultMathOperation = static_cast<double>(numberOne) + numberTwo;
		std::cout << numberOne << " + " << numberTwo << " = " << resultMathOperation;
		break;
	case '-':
		resultMathOperation = static_cast<double>(numberOne) - numberTwo;
		std::cout << numberOne << " - " << numberTwo << " = " << resultMathOperation;
		break;
	case '*':
		resultMathOperation = static_cast<double>(numberOne) * static_cast<double>(numberTwo);
		std::cout << numberOne << " * " << numberTwo << " = " << resultMathOperation;
		break;
	case '/':
		resultMathOperation = static_cast<double>(numberOne) / numberTwo;
		std::cout << numberOne << " / " << numberTwo << " = " << resultMathOperation;
		break;
	case '%':
		resultMathOperation = numberOne % numberTwo;
		std::cout << numberOne << " % " << numberTwo << " = " << resultMathOperation;
		break;


	default:
		std::cout << "Error. Invalid math operation.";
		break;
	}
}

int main()
{

	//calculate(7, 5, '%');
	//std::cout << "\t";
	//std::cout<<(typeid(calculate(5, 5, '+'))).name();
	
	printNumberOfLegs(Animal::PIG);
	std::cin.get();
	return 0;
}