#include <iostream>
#include <array>
#include "random.h"

using namespace std;

string CurrentItem[] = {"", "", "", "", ""};

int MAX = 5;
/*
USE THIS!
class Item
{
public:
    string Name = "NAME";
    int healthGiving = 100;
    int defGiving = 10;
    int magicGiving = 2;
    bool GiveCustom = false;
    string CustomGiving;
    int GivingCustom = 0;
};
*/

class Item
{
public:
    string Name = "NAME";
    int healthGiving = 100;
    int defGiving = 10;
    int magicGiving = 2;
    bool GiveCustom = false;
    string CustomGiving;
    int GivingCustom = 0;
};

void CheckItems()
{
    for (int i = 0; i <= 4; i++)
    {
        cout << CurrentItem[i];
    }
}

void AddItem()
{
    //Default Item
    Item item1;
    Item item2;
    //Insert your item here!
    string Items[] = {item1.Name, item2.Name};
    //How Many Items we have
    int x = end(Items)-begin(Items);
    for (int i = 0; i <= 4; i++)
    {
        
        if (CurrentItem[i] == "")
        {
            randomInt(0, x);
            break;
        }
    }
}