/*
��������� - ���������� ��� ������, ������� ��������� ������������ ���������� ������ ����� � ������ �����.
*/
#include <iostream>
#include <iomanip>
struct Employee		// ���������� ���������,������� ������ � ������� �����
{
	//���������� ���� ���������� "����� ���������" (��� "���� ���������")
	short id;
	int age;
	double salary;
};

struct CryptoWallet
{
	std::string name_token;//�������� ������
	double exchange_rates=0; // ���� ������
	double quantity=0;//���������� �����
	//double amount; // ��������� ����� �� �����
	std::string token;// ����� ��� ��������
};


int main()
{
	setlocale(LC_ALL, "ru");
	// ����� ������������ ��������� ����� ������ �������� ���������� ���� ���� ���������
	CryptoWallet alex; //������� ���������
	CryptoWallet john;
	//������ ���������� alex � john ��������� �� ��� ���������, ����� �������� ������ � ��������� � ������, ������������ 
	//�������� ������� ��� �������� ������ ����� (.)
	alex.name_token = "Solana"; // ����������� �������� ����� name_token ��������� alex
	alex.exchange_rates = 47;//��������
	alex.quantity = 35.0002345917;
	alex.token = "0x2170ed0880ac9a755fd29b2688956bd959f933f8";

	std::cout << std::setprecision(18);
	//��������� ��������� �������� Solana
	char dlrs = 36;
	double totalMoney = alex.exchange_rates * alex.quantity;
	std::cout << "��������� �������� " << alex.name_token << " ���������� " << totalMoney << " " << dlrs<<std::endl;


	john.name_token = "Etherium"; // ����������� �������� ����� name_token ��������� alex
	john.exchange_rates = 1817;//��������
	john.quantity = 3.0;
	john.token = "0x2170ed0880ac9a755fd29b2342314bd959f933f8";
	double totalMoney_2 = john.exchange_rates * john.quantity;
	std::cout << "��������� �������� " << john.name_token << " ���������� " << totalMoney_2 << " " << dlrs << std::endl;

	// ��� ����� ������� ������������� �������� � �++ ���� ������ ���������������.

	CryptoWallet nix = { "BTC", 33000, 0.52,"0x2170ed0880ac9a755fd29b2688956bd900f933f8" };
	//nix.name_token = "BTC"
	//nix.exchange_rates = 33000;
	//nix.quantity = 0.52
	//nix.token = 0x2170ed0880ac9a755fd29b2688956bd900f933f8

	//���� ����������� uniform-�������������
	CryptoWallet lex{ "BTC", 60000, 23,"0x2170ed0880ac9a755fd29b2688956bd900f933f8" };
	std::cout << lex.name_token;

	system("pause");
	return 0;
}