#include <iostream>

// перечисления и перечислители хорошо использовать, чтобы возвращать в return описательный код ошибки, а не return -1, 0 и т.п
//enum ParseResult
//{
//	SUCCESS = 0,
//	ERROR_OPENING_FILE = -1,
//	ERROR_PARSING_FILE = -2,
//	ERROR_READING_FILE = -3,
//
//};
//
//
//ParseResult readFileContents()
//{
//	if (!openFile())
//		return ERROR_OPENING_FILE;
//	if (!parseFile())
//		return ERROR_PARSING_FILE;
//	if (!readfile())
//		return ERROR_READING_FILE;
//}

enum MonsterType
{
	MONSTER_OGRE,
	MONSTER_GOBLIN,
	MONSTER_SKELETON,
	MONSTER_ORC,
	MONSTER_TROLL,
};
int main()
{
	MonsterType ogre = MONSTER_GOBLIN;
	std::cout << ogre << std::endl;
	

	system("pause");
	return 0;
}