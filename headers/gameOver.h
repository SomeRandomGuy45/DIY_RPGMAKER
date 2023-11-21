#include <iostream>

using namespace std;

long randomLong(int start, long range)
{
    return (start + rand() % range);
}

int random(int start, int range)
{
    return (start + rand() % range);
}

int id = randomLong(1,999999999999);
int* game = &id;
string DeathMSG[] = {"Welp you died", "Try not die next time."};
//Change x for the length!
int x = 2;

int i = random(0,x);


string GameOver()
{
    cout << DeathMSG[i] << "\n";
    cout << "Game ID " << id << "\n";
    cout << "Game ID Pointer " << game << "\n";
    return "Death";
}