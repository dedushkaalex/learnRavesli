#include <iostream>


static double allSum;
struct Advertising 
{
	int sumOfAds; //���������� �������
	float clickAdsPercent;//������� ����� �� ����������
	double average�lickAmountAds;//���������� � ������� �� ������ ������� �� ����������

};

void printAdvertising(Advertising object);
double addResult(Advertising object); //������� ��������� � ������� �� ������ ������� ����������

int main()
{
	setlocale(LC_ALL, "ru");
		Advertising alex;
		char s=36;
		std::cout << "������� �� ������ ���������� �������?" << "\n>>>";
		std::cin >> alex.sumOfAds;
		std::cout << "������� ��������� ����� ��������� �� ����� �������?" << "\n>>>";
		std::cin >> alex.clickAdsPercent;
		std::cout << "������� � ������� ����� ������� �� �������?" << "\n>>>";
		std::cin >> alex.average�lickAmountAds;
		printAdvertising(alex);
		std::cout << "\n";
		system("cls");
		std::cout << "�� ���������� �� ���� " << addResult(alex) <<s<< std::endl;
		system("pause");
	return 0;
}

void printAdvertising(Advertising object)
{
	std::cout << "���������� ����������� �������: "<< object.sumOfAds<<std::endl;
	std::cout << "������� ��������� ����������� ������ �� ����������: "<< object.clickAdsPercent<<std::endl;
	std::cout << "������� �� ��������� � ������� �� ������� �� ����������: "<< object.average�lickAmountAds<<std::endl;

	
	


}

double addResult(Advertising object)
{
	double allSum= object.sumOfAds * static_cast<double>(object.clickAdsPercent)/100* object.average�lickAmountAds;
	return allSum;

	return 0;
}