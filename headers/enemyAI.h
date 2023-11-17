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
    bool LevelLocked = false;
    int levelSpawn = 0;
};

3. Passing it to main

*/

class Monster1
{
public:
    string name = "Title";
    int health = 100;
    int def = 0;
    int attack = 5;
    int givingXp = 10;
    //LevelLocked isn't used yet
    bool LevelLocked = false;
    int levelSpawn = 0;
};

