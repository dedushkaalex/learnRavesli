#include <iostream>
#include <iomanip>
//typedef ��������� ������������ ������� ��������� ��� ������ ���� ������ � ������������ ��� ������ ������������ ����� ����
//typedef ������������ � ��������� ������������ � ������������� ����.
typedef double speed_mc_t;
static speed_mc_t;


speed_mc_t SpeedCar(double speed);
int main()
{
	std::cout << std::setprecision(12);
	//typedef int age_t; // ���������� age � �������� ���������� ��� ���� int.
					   // ��������� ��������� _t, ��������, ����� �������, ��� ��������������� �������� ���, � �� ����������.


	// ��� ��� ���������� ������������
	/*age_t myAge;
	int myAge;*/

	std::cout << SpeedCar(10.5) << std::endl;

//� �++ 11 ����� ����� ������ �������� ��������� ���������� ���� ������ -  type alias
//�� �������,��� typedef. ����������� ���.
	using name_t = std::string; 

	std::cin.get();
	return 0;
}

speed_mc_t SpeedCar(double speed)
{
	
	double result{ speed * 1000 / 3600 };
	return result;
}