// ch4.x_q4_structEnumClassMonsters.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

//defines different monster types
enum class MonsterTypes {
	OGRE,
	DRAGON,
	ORC,
	GIANT_SPIDER,
	SLIME
};

//struct that holds variables for enum class, monster's name and health
struct Monster {
	MonsterTypes type;
	std::string name;
	int health;
};

//checks type of monster w the struct and prints it as a string
std::string getMonsterTypeString(Monster monster) {
	if (monster.type == MonsterTypes::OGRE)
		return "Ogre";
	if (monster.type == MonsterTypes::DRAGON)
		return "Dragon";
	if (monster.type == MonsterTypes::ORC)
		return "Orc";
	if (monster.type == MonsterTypes::GIANT_SPIDER)
		return "Giant Spider";
	if (monster.type == MonsterTypes::SLIME)
		return "Slime";
	return "Unknown";
}

//print monster's stats
void printMonsterStats(Monster monster) {
	std::cout << "This " << getMonsterTypeString(monster);
	std::cout << " is named " << monster.name << " and has " << monster.health << " health.\n";
}

int main()
{
	Monster ogre{ MonsterTypes::OGRE, "Torg", 145 };
	Monster slime{ MonsterTypes::SLIME, "Blurp", 23 };

	printMonsterStats(ogre);
	printMonsterStats(slime);

	return 0;
}

