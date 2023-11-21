/*
VERISON 1.0.0

IF YOU USE THIS CODE PLEASE CREDIT ME!
*/

/*
MAIN LIBRARY
FOR LOGIC I GUESS!!!
*/


//This code is probably fragile so like it's going to break alot
#include <iostream>
#include "character.h"
#include "enemyAI.h"
#include "items.h"
#include "gameOver.h"

#if defined(__linux__)
    #include <unistd.h>
    #include <stdlib.h>
#elif _WIN32
    #include <Windows.h>
#elif __APPLE__
    #include <unistd.h>
    #include <stdlib.h>
#endif

using namespace std;

void ChooseClass(string RPGName, string Weapon1, string Weapon2, string Weapon3, string Weapon4, int attack1, int attack2, int attack3, int attack4)
{
    int input;
    cout << "Hello welcome to " << RPGName << " lets get you setup before we start the game!\n";
    cout << "What weapon would you like?\n"
         << "1. " << Weapon1 << "\n"
         << "2. " << Weapon2 << "\n"
         << "3. " << Weapon3 << "\n"
         << "4. " << Weapon4 << "\n";
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
    #if defined(__linux__)
        system("clear");
    #elif _WIN32
        system("cls");
    #elif __APPLE__
        system("clear");
    #endif
}

void MainGame(string AttackName1, string AttackName2, string AttackName3, int Muti1, int Muti2, int Muti3)
{
    /*
    TODO: ADD MORE OPITIONS!
    */
    start:
    int input2;
    cout << "Here are your stats\n";
    cout << "Health " << plrHealth << " Def " << plrDef << " Magic " << plrMagic << " Weapon " << plrWeapon << "\n";
    cout << "What Would You Like To Do?\n"
         << "1. Fight\n"
         << "2. COMING SOON!!!!\n";
    cin >> input2;
    #if defined(__linux__)
        system("clear");
    #elif _WIN32
        system("cls");
    #elif __APPLE__
        system("clear");
    #endif
    if (input2 == 1)
    {
        int input3;
        cout << "A Monster Appears!\n";
        cout << "1. Fight\n2. Item\n";
        cin >> input3;
        if (input3 == 1)
        {
            Default Default;
            #if defined(__linux__)
                system("clear");
            #elif _WIN32
                system("cls");
            #elif __APPLE__
                system("clear");
            #endif
            //I know go backs are bad.. But a new function will come soon!
            goBack:
            int input;
            cout 
                << "Its your turn what is you attack?\n"
                << "1. " + AttackName1 << "\n"
                << "2. " + AttackName2 << "\n"
                << "3. " + AttackName3 << "\n";
            cin >> input;
            if (input == 1)
            {
                int newMath = attack + Muti1;
                if (CheckMonster() == "Default")
                {
                    int RemoveHealth = Default.health + Default.def - newMath;
                    Default.health = Default.health - RemoveHealth;
                    cout << "The Monster is down by " << RemoveHealth << " . The Monster is now at " << Default.health << "!\n";
                    if (Default.health != 0)
                    {
                        if (plrHealth >= 0)
                        {
                            cout << "You have dead!\n";
                            GameOver();
                        } else
                        {
                            int healthThing = plrHealth * plrDef;
                            int RemovePlayerHealth = healthThing - Default.attack;
                            plrHealth -= RemovePlayerHealth;
                            cout << "You have been damage by " << RemovePlayerHealth << " . Your new health is " << plrHealth << "!\n";
                            goto goBack;
                        }
                    }
                    else
                    {
                        cout << "You Won!\n";
                        goto start;
                    }
                }
            }
            else if (input == 2)
            {
                int newMath = attack + Muti2;
                if (CheckMonster() == "Default")
                {
                    int RemoveHealth = Default.health + Default.def - newMath;
                    Default.health = Default.health - RemoveHealth;
                    cout << "The Monster is down by " << RemoveHealth << " . The Monster is now at " << Default.health << "!\n";
                    if (Default.health != 0)
                    {
                        if (plrHealth >= 0)
                        {
                            cout << "You have dead!\n";
                            GameOver();
                        } else
                        {
                            int healthThing = plrHealth * plrDef;
                            int RemovePlayerHealth = healthThing - Default.attack;
                            plrHealth -= RemovePlayerHealth;
                            cout << "You have been damage by " << RemovePlayerHealth << " . Your new health is " << plrHealth << "!\n";
                            goto goBack;
                        }
                    }
                    else
                    {
                        cout << "You Won!\n";
                        goto start;
                    }
                }
            }
            else if (input == 3)
            {
                int newMath = attack + Muti3;
                if (CheckMonster() == "Default")
                {
                    int RemoveHealth = Default.health + Default.def - newMath;
                    Default.health = Default.health - RemoveHealth;
                    cout << "The Monster is down by " << RemoveHealth << " . The Monster is now at " << Default.health << "!\n";
                    if (Default.health != 0)
                    {
                        if (plrHealth >= 0)
                        {
                            cout << "You have dead!\n";
                            GameOver();
                        } else
                        {
                            int healthThing = plrHealth * plrDef;
                            int RemovePlayerHealth = healthThing - Default.attack;
                            plrHealth -= RemovePlayerHealth;
                            cout << "You have been damage by " << RemovePlayerHealth << " . Your new health is " << plrHealth << "!\n";
                            goto goBack;
                        }
                    }
                    else
                    {
                        cout << "You Won!\n";
                        goto start;
                    }
                }
            }
        }
    }
}
