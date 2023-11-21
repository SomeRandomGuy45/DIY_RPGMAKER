/*
THIS IS THE SETTINGS OF THE ENEMIES!
*/

#include <iostream>

using namespace std;


/*
CREATING CUSTOM MONSTERS!

1. Setup the class

class MonsterName
{
    public:

};

2. Insert The Basics

class MonsterName
{
public:
    string name = "InsertMonsterNameHere";
    int health = 100;
    int def = 0;
    int attack = 5;
    int givingXp = 10;
    int levelSpawn = 0;
    bool LevelLocked = false;
    bool isDeafult = false;
};

3. Passing it to the function

*/

std::string CurrentMonster = "Default";

class Default
{
public:
    string name = "Monster";
    int health = 25;
    int def = 0;
    int attack = 5;
    int givingXp = 5;
    int levelSpawn = 0;
    bool LevelLocked = false;
    bool isDefault = true;
};

class Monster1
{
public:
    string name = "Title";
    int health = 100;
    int def = 0;
    int attack = 5;
    int givingXp = 10;
    int levelSpawn = 2;
    bool LevelLocked = true;
    bool isDeafult = false;
};

string CheckMonster()
{
    Monster1 Monster1;
    Default Default;
    if (Monster1.LevelLocked == true && Monster1.levelSpawn != 0)
    {
        //Since this is true we need to check if we are the right level!
        if (Monster1.levelSpawn == level)
        {
            CurrentMonster = Monster1.name;
        }
        else if (Monster1.levelSpawn > level || Monster1.levelSpawn < level)
        {
            CurrentMonster = "Default";
        }
    }
    else 
    {
        CurrentMonster = "Default";
    }
    return CurrentMonster;
}
