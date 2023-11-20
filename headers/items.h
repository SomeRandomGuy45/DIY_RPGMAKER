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

void CheckItems()
{
    for (int i = 0; i < 5; i++)
    {
        cout << CurrentItem[i] << endl;
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
    //Change it to how many items you have!
    int x = 2;
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