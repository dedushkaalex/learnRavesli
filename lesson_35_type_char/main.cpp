#include <iostream>
#include <windows.h>

// char - ������������� ��� ������, �� �� ������������ ����� � ascii - ������. ����� ����� � ������� ����������.
// ���� ����� ������� ����� ������� ascii ������ �������� ����� ������������� ��������� static_cast
int main()
{
	//char ch{1};
	//std::cout << ch << std::endl;
	//static_cast - �������� ��� ����������� �� ������ ���� ������ � ������.
	//static_cast<�����_���_������>(���������)
	//std::cout << static_cast<int>(ch) << std::endl; //������� 1
	setlocale(LC_ALL, "ru");
	//char ch{ 0 };
	//std::cout << "������� ������:\n" << ">>> ";
	//std::cin >> ch;
	//std::cout << "� ������� ascii ������ " << ch << " ����� ��� ������� " << static_cast<int>(ch) << std::endl;
	//std::cout << "Input a keyboard character: "; // �����������, ��� ������������ ���� abcd

	//char ch;
	//std::cin >> ch; // ch = 'a', "bcd" ��������� �� ������� ������
	//std::cout << ch << " has ASCII code " << static_cast<int>(ch) << std::endl;

	// �������� ��������, ��������� cin �� ������ ������������ ���-���� ������, ������ ������� �� �������� ������!
	//std::cin >> ch; // ch = 'b', "cd" ��������� � ������
	//std::cout << ch << " has ASCII code " << static_cast<int>(ch) << std::endl;
	system("pause");

}
