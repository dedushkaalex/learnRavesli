#include <iostream>


enum class StatusCode
{
	ERROR_CODE = -1,
	CODE_SUCCESS = 0,
};

StatusCode getStatus(int value)
{
	if (value == 10) {
		return StatusCode::ERROR_CODE;
	}
	else
	{
		StatusCode::CODE_SUCCESS;
	}
}


int main()
{
	setlocale(LC_ALL, "ru");
	if (getStatus(10) == StatusCode::ERROR_CODE)
	{
		std::cout << static_cast<int>(StatusCode::ERROR_CODE);
	}
	std::cin.get();
	return 0;
}