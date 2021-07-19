#include <iostream>
#include <typeinfo> //���� ���������� ����� ��� ������ � ���������\����������


/*
���� �������:
1) case - ������� ����������� � �������������� ��������� ����� [case <����������� ���������>:].����������� ��������� ����������� �� ���������
� ����������, ����������� � switch(<���������>). ��� ��������� case ������ ���� �����������.

2) default case - ��� ��� ���� ������� �����������, ���� �� ���� case �� ������������� ��������� switch.������ ��������� ��������� � ����� switch

*/

/*
��������� ���� � switch:
1) ������������������ ���������� ����. ����� ���� ������(��� default), �� ���������� ���������� � ������� ����������,���� �� ����� ��������� ���� �� ���-��:
	---��������� ����� ����� switch
	---����������� return
	---����������� goto
	---����������� break


*/

/*
��������� Switch-������:
1) break - �������� ���� - ����� �� switch'�.
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