//???? C++ ????????? ????????????? ????????? ???? ??????????? (????????????????) ???? ??????.
#include <iostream>

int main()
{
	//????????? ????? ???????????? Colors
	//?????????? ???????????? ?? ??????? ????????? ??????. ?????? ????? ?????????? 
	//?????????????? ???? ?????????? (????????, ??? ?????????? paint ? ???????, ??????????? ????),
	//?????? ????? ?????????? ?????? ??? ???? ??????????.

	//????? ????? ?????????????? ?? ?????? ????????? ? ??????? ??????????????? ? ?????? ????????????? ????
	/*
	enum Colors
{
	YELLOW,
	BLACK, // BLACK ????????? ? ?????????? ???????????? ????
	PINK
};
 
enum Feelings
{
	SAD,
	ANGRY,
	BLACK // ??????? ??????, ??? ??? BLACK ??? ???????????? ? enum Colors
};
//????????: ANIMAL_ ??? COLOR_, ??? ??? ?????????????? ?????????? ????, ??? ? ? ????? ??????????????? ????.
	
	*/
	enum Colors {
		// ???? ????????? ????????????? - ??? ????????? ???????? ????? ???? ??????
		// ?????? ????????????? ?????????? ??????? (?? ?????? ? ???????)
		//??????? ????????????? ????????????? ????????????? ????????????? ???????? ? ??????????? ?? ??? ??????? ? ??????(?? ????????? ? ????)
		COLOR_RED,   // ????????????? 0
		COLOR_GREEN, // ????????????? 1
		COLOR_BLUE,  // ????????????? 2
		COLOR_WHITE, // ????????????? 3
		COLOR_BROWN, // ????????????? 4
		COLOR_PINK,  //??????? ? ?++ 11, ???????? ??????? ?????????, ?? ?? ???????????.
	};// ?????? ??? enum ?????? ????????????? ?????? ? ???????

	//?????????? ????????? ?????????? ?????????????? ???? Colors
	Colors paint{ COLOR_BLUE };
	Colors house{ COLOR_PINK };
	std::cout<<COLOR_GREEN<<std::endl;
	std::cout << "___________________________________________________________\n\n";

	//????? ? ?????? ?????????? ???????? ??????????????.
	//?????, ?? ???????????? ???? ?????????????, ????? ????? ???????? ?? ??????? ??????, ??? ???????? ?????????? ??????????????.
 
		// ?????????? ????? ????????????? ??? Animals
		enum Animals
	{
		ANIMAL_PIG = -4,
		ANIMAL_LION, // ????????????? -3
		ANIMAL_CAT, // ????????????? -2
		ANIMAL_HORSE = 6,
		ANIMAL_ZEBRA = 6, // ????? ?? ?? ????????, ??? ? ANIMAL_HORSE
		ANIMAL_COW // ????????????? 7
	};
		/*
		?????: ?? ???????????? ???? ???????? ??????????????.
		???????: ?? ???????????? ?????????? ???????? ???? ?????????????? ? ????? ????????????, ???? ?? ??? ??? ?????? ???????.
		*/

		std::cout << ANIMAL_LION << std::endl;
		int mypet = ANIMAL_PIG;
		std::cout << ANIMAL_HORSE<<std::endl; // ?????????????? ? int, ? ????? ????????? ?? ?????



	system("pause");
	return 0;
}