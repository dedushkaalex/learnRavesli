#include <iostream>

enum class MonsterType
{
	OGRE,
	GOBLIN,
	SKELETON,
	ORC,
	TROLL
};

struct Monster
{
	MonsterType type;
	const char* name;
	int health;
};

const char* getTypeMonster(Monster object)
{
	if (object.type == MonsterType::OGRE) return "Ogre";
	if (object.type == MonsterType::GOBLIN) return "Goblin";
	if (object.type == MonsterType::SKELETON) return "Skeleton";
	if (object.type == MonsterType::ORC) return "Orc";
	if (object.type == MonsterType::TROLL) return "Troll";
	return "Unknown";
}

void printInfoMonster(Monster object) {
	std::cout << "This " << getTypeMonster(object) << " is named " << object.name << " and has " << object.health << " health." << std::endl;
}

int main()
{
	Monster Kimimaro{MonsterType::SKELETON, "Kimimaro", 500};
	printInfoMonster(Kimimaro);

	system("pause");
	return 0;
}