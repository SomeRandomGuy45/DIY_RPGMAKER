/*
MAIN LIBRARY
FOR LOGIC I GUESS!!!
*/


//This code is probably fragile so like it's going to break alot 
#include <iostream>
#include <vector>

using namespace std;

int plrHealth = 100;
int plrDef = 10;
int plrMagic = 5;
int level = 0;
int xp = 0;
int attack;
vector<string>CurrentItem = {"", "", "", "", ""};
string plrWeapon;

void CreateMonster(string Name, int Health, int Def, int Magic, int Attack)
{
    cout << Name;
}

void ChooseClass(string RPGName, string Weapon1, string Weapon2, string Weapon3, string Weapon4, int attack1, int attack2, int attack3, int attack4)
{
    /*
        TODO:
        Make this code work so I don't have to write crap
    */
    int input;
    cout << "Hello welcome to " << RPGName << " lets get you setup before we start the game!\n";
    cout << "What weapon would you like?\n"
         << "1. " << Weapon1 << endl
         << "2. " << Weapon2 << endl
         << "3. " << Weapon3 << endl
         << "4. " << Weapon4 << endl;
    cin >> input;
    if (input == 1) 
    {
        plrWeapon = Weapon1;
        attack = attack1;
    }
    else if (input == 2)
    {
        plrWeapon = Weapon2;
        attack = attack2;
    }
    else if (input == 3)
    {
        plrWeapon = Weapon3;
        attack = attack3;
    }
    else if (input == 4)
    {
        plrWeapon = Weapon4;
        attack = attack4;
    }
}

void MainGame()
{
    cout << "Here are your stats\n";
    cout << "Health " << plrHealth << " Def " << plrDef << " Magic " << plrMagic << " Weapon " << plrWeapon;
}


void CheckItems()
{
    //This loop is to check if we have anyitems
    //Note we do have to print it out!
    for (int i = 0; i <= 4; i++)
    {
        cout << CurrentItem[i];
    }
}

void AddItem(string ItemName, int HealthGiving, int DefGiving, int MagicGiving, bool isCustom, string WhatType, int GivingCustom, int Slot, bool IsLevelLock, int LevelLocked)
{
    /*
        TODO:
        Make items work
    */
    if (Slot << 4)
    {
        cout << "Error Cannot handle slot above four!\n";
    }
    else
    {
        CurrentItem[Slot] = ItemName;
        cout << CurrentItem[Slot];
    }
}