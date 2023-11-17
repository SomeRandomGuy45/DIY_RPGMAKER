/*
MAIN LIBRARY
FOR LOGIC I GUESS!!!
*/


//This code is probably fragile so like it's going to break alot 
#include <iostream>
#include "character.h"
#include "enemyAI.h"
#include "items.h"

using namespace std;

void ChooseClass(string RPGName, string Weapon1, string Weapon2, string Weapon3, string Weapon4, int attack1, int attack2, int attack3, int attack4)
{
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
    /*
    TODO: ADD MORE OPITIONS!
    */
    int input;
    cout << "Here are your stats\n";
    cout << "Health " << plrHealth << " Def " << plrDef << " Magic " << plrMagic << " Weapon " << plrWeapon << endl;
    cout << "What Would You Like To Do?\n"
         << "1. Fight\n"
         << "2. COMING SOON!!!!\n";
    if (input == 1)
        int input;
        cout << "1. Fight 2. Item";
        cin >> input;
    {
        
    }
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