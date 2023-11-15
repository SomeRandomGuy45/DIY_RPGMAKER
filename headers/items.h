#include <iostream>

using namespace std;

class Item
{
public:
    string Name;
    int healthGiving = 100;
    int defGiving = 10;
    int magicGiving = 2;
    bool GiveCustom = false;
    string CustomGiving;
    int GivingCustom = 0;
};