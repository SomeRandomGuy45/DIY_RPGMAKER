#include <iostream>
#include <array>

using namespace std;

int randomInt(int start, int range)
{
    return (start + rand() % range);
}

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

class Item2
{
public:
    string Name = "NAME2";
    int healthGiving = 150;
    int defGiving = 15;
    int magicGiving = 7;
    bool GiveCustom = false;
    string CustomGiving;
    int GivingCustom = 0;
};

void CheckItems()
{
    for (int i = 0; i < 5; i++)
    {
        if (CurrentItem[i] == "")
        {
            std::cout << "\n";
        }
        else
        {
            cout << CurrentItem[i] << "\n";
        }
    }
}

void AddItem()
{
    //Default Item
    //Insert Your item classes here!
    Item item1;
    Item2 item2;
    //Insert your item here!
    string Items[] = {item1.Name, item2.Name};
    //How Many Items we have
    //Change it to how many items you have!
    int x = 1;
    for (int i = 0; i < 5; i++)
    {
        
        if (CurrentItem[i] == "")
        {
            int newThing = randomInt(0, x);
            CurrentItem[i] = Items[newThing];
            break;
        }
    }
}

void RemoveItems(int slot)
{
    CurrentItem[slot] = "";
}