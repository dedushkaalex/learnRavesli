#include <iostream>
#include <iomanip>
//typedef позвол€ет программисту создать псевдоним дл€ любого типа данных и использовать его вместо фактического имени типа
//typedef используетс€ в улучшении документации и разборчивости кода.
typedef double speed_mc_t;
static speed_mc_t;


speed_mc_t SpeedCar(double speed);
int main()
{
	std::cout << std::setprecision(12);
	//typedef int age_t; // используем age в качестве псевдонима дл€ типа int.
					   // добавл€ют окончание _t, указыва€, таким образом, что идентификатором €вл€етс€ тип, а не переменна€.


	// эти два стейтмента эквивалентны
	/*age_t myAge;
	int myAge;*/

	std::cout << SpeedCar(10) << std::endl;

	std::cin.get();
	return 0;
}

speed_mc_t SpeedCar(double speed)
{
	double result{ static_cast<double>(speed) * 1000 / 3600 };
	return result;
}