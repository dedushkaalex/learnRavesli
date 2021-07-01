#include <iostream>

//Enum ������ ����� ��������� ������� ���������, � ������� �� enum. ����������� Enum ������.
enum class Fruits   // ���������� "class" � enum ���������� ������������ � ������������ �������� ���������, ������ ������������ "�����������" ������������
{
	LEMON,			// LEMON ��������� ������ ��� �� ������� ���������, ��� � Fruits
	LIME,
};

enum class Guns
{
	PISTOL, //PISTOL ��������� ������ ��� �� ������� ���������, ��� � Guns
	KNIFE,
};


int main()
{
	Fruits fruit = Fruits::LEMON;	// ����������: LEMON �������� �� ��������, �� ������ ������������ Fruits::LEMON
	Guns gun{ Guns::PISTOL };

	//if (fruit == gun) // ������ ����������, ��������� ���������� �� �����, ��� ���������� ������ ����: Fruits � Guns
	//{
	//	return -1;
	//}
	// ��� ��������, ��� ���������� �� ������ ���������� ������������� �� ������ ������������. 
	//���� �� ����������� ��� �������, ���������� ������ ������ (��� � �������, ����������� ����).

	/*
	� �������� enum ���������� ������ �� ������ ������ �������������� �������� �������������� � ����� �����. ��� ������! �� ������ ����� ���� ��������, ����� 
	����� ����� ������� ��� �����������. � ����� ������� �� ������ ���� ������������� ������������� ������ enum � ��� int, 
	��������� �������� static_cast:
	*/
	Fruits fru = Fruits::LIME;

	//std::cout << fru; // �� ����� ��������, ��������� ��� �������� �������������� � ��� int
	std::cout << static_cast<int>(fru); // ����������� ����� 1
	system("pause");
	return 0;
}