#include <iostream>
/*
������� ������������� �������� �������� ���, ��� �� ����� ���������� � �������,������� ����� �������� � �������
���� ���������
*/

struct CryptoWallet
{
	std::string name_token;//�������� ������
	double exchange_rates = 0; // ���� ������
	double quantity = 0;//���������� �����
	//double amount; // ��������� ����� �� �����
	std::string token;// ����� ��� ��������
};


void printInformation(CryptoWallet employee)
{
	std::cout << "Coin: " << employee.name_token << "\n";
	std::cout << "Exchange Rate: " << employee.exchange_rates << "\n";
	std::cout << "Quantity: " << employee.quantity << "\n";
	std::cout << "Adress ERC-20: " << employee.token << "\n";
}


/*
������� ����� ���������� ���������, ��� ��� ������, ����� ����� ������� ��������� ����������
������ ��������� ��� ������� ����� ����� ������ ���������, � ����� ���� � ������. ������ �����.��� ������� � ������������ �����������
*/
struct Point3d // ������� ���������
{
	double x;
	double y;
	double z;
};

Point3d getZeroPoint()
{
	Point3d temp = { 0.0, 0.0, 0.0 };
	return temp;
}

//��������� ���������

struct Human {
	int age;//�������
	float hight;//����
	float weight;//���
	std::string hairColor;//���� �����
	std::string eye�olor; //���� ����
	std::string bodyType; //������������
	CryptoWallet myWallet; //��������� ��������� CryptoWallet
};

int main()
{
	/*CryptoWallet john;
	john = { "BTC",34000,4,"adres here" };
	printInformation(john);*/
	/*Point3d zero = getZeroPoint();

	if (zero.x == 0.0 && zero.y == 0.0 && zero.z == 0.0)
		std::cout << "The point is zero\n";
	else
		std::cout << "The point is not zero\n";*/

	Human aleksei = { 20,179,74,"Green","Blue","Sportivnoe",{"BNB",300,5,"0x2170ed0880ac9a755fd29b2688956bd959f933f8"}};
	CryptoWallet ales = {"BNB",300,5,"0x2170ed0880ac9a755fd29b2688956bd959f933f8"};
	std::cout << aleksei.myWallet.exchange_rates << std::endl;
	std::cout << "The size of Employee is " << sizeof(CryptoWallet) <<" = " <<sizeof(ales.exchange_rates)<<" + "<<sizeof(ales.name_token) << " + "<<
		sizeof(ales.quantity)<<" + " << sizeof(ales.token) << " = " << sizeof(ales.exchange_rates) +
																	   sizeof(ales.name_token) +
																	   sizeof(ales.quantity) + sizeof(ales.token) << "\n";
	std::cin.get();
	return 0;
}