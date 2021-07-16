#include <iostream>


static double allSum;
struct Advertising 
{
	int sumOfAds; //количество рекламы
	float clickAdsPercent;//процент клика на объявление
	double averageСlickAmountAds;//заработали в среднем за каждое нажатие на объявления

};

void printAdvertising(Advertising object);
double addResult(Advertising object); //считаем заработок в среднем за каждое нажатие объявления

int main()
{
	setlocale(LC_ALL, "ru");
		Advertising alex;
		char s=36;
		std::cout << "Сколько Вы хотите разместить рекламы?" << "\n>>>";
		std::cin >> alex.sumOfAds;
		std::cout << "Сколько процентов людей переходят по вашей рекламе?" << "\n>>>";
		std::cin >> alex.clickAdsPercent;
		std::cout << "Сколько в среднем стоит переход по рекламе?" << "\n>>>";
		std::cin >> alex.averageСlickAmountAds;
		printAdvertising(alex);
		std::cout << "\n";
		system("cls");
		std::cout << "Вы заработали за день " << addResult(alex) <<s<< std::endl;
		system("pause");
	return 0;
}

void printAdvertising(Advertising object)
{
	std::cout << "Количество размещённой рекламы: "<< object.sumOfAds<<std::endl;
	std::cout << "Сколько процентов посетителей нажали на объявление: "<< object.clickAdsPercent<<std::endl;
	std::cout << "Сколько вы зарботали в среднем за нажатие на объявление: "<< object.averageСlickAmountAds<<std::endl;

	
	


}

double addResult(Advertising object)
{
	double allSum= object.sumOfAds * static_cast<double>(object.clickAdsPercent)/100* object.averageСlickAmountAds;
	return allSum;

	return 0;
}