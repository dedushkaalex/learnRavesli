#include <iostream>
#include <iomanip>
//typedef позволяет программисту создать псевдоним для любого типа данных и использовать его вместо фактического имени типа
//typedef используется в улучшении документации и разборчивости кода.
typedef double speed_mc_t;
static speed_mc_t;


speed_mc_t SpeedCar(double speed);
int main()
{
	std::cout << std::setprecision(12);
	//typedef int age_t; // используем age в качестве псевдонима для типа int.
					   // добавляют окончание _t, указывая, таким образом, что идентификатором является тип, а не переменная.


	// эти два стейтмента эквивалентны
	/*age_t myAge;
	int myAge;*/

	std::cout << SpeedCar(10.5) << std::endl;

//В с++ 11 ввели новый способ задавать псевдоним имеющимуся типу данных -  type alias
//Он удобнее,чем typedef. Используйте его.
	using name_t = std::string; 

	std::cin.get();
	return 0;
}

speed_mc_t SpeedCar(double speed)
{
	
	double result{ speed * 1000 / 3600 };
	return result;
}