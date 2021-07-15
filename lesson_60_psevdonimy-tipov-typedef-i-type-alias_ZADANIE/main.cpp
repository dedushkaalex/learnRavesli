#include <iostream>

typedef int status_t;//задаем псевдоним status_t для int 
using status_2_t = int;//задаем псевдоним status_t для int .способ type alias

status_t editData();
status_2_t editDat1();
int main()
{

	std::cout << editData()<<std::endl;


	system("pause");
	return 0;
}

status_t editData()
{

	return sizeof(status_t);
}

status_2_t editDat1() {

	return sizeof(status_2_t);
}