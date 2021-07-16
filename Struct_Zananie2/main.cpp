#include <iostream>
#include <iomanip>


struct FractionalNumbers
{
	int fractional; //целочисленный числитель
	int denominator;// знаменатель целочисленный

};


void multiply(FractionalNumbers a, FractionalNumbers b);
int main()
{
	setlocale(LC_ALL, "ru");
	FractionalNumbers a;
	std::cout << "Введите числитель и знаменатель для первого числа:" << "\n>>>";
	std::cin >> a.fractional;
	std::cout << "\n>>>";
	std::cin >> a.denominator;

	FractionalNumbers b;
	std::cout << "Введите числитель и знаменатель для второго числа:" << "\n>>>";
	std::cin >> b.fractional;
	std::cout << "\n>>>";
	std::cin >> b.denominator;
	multiply(a, b);
	system("pause");
	return 0;
}
void multiply(FractionalNumbers a, FractionalNumbers b)
{
	std::cout << "\n";
	std::cout << std::setprecision(12);
	std::cout << static_cast<double>(a.fractional) * static_cast<double>(b.fractional) / (static_cast<double>(a.denominator) * static_cast<double>(b.denominator));
}

//Вопрос. почему вылезают Warningi если юзать один статик каст??