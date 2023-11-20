//This is our main library!
//It likes to host all of the games login here!
#include "headers/main.h"

int main()
{
    //Some Tests to show you how the game works!
    //AddItem("Test", 5, 5, 5, false, "", 0, 0, false, 0);
    CheckItems();
    ChooseClass("Test", "Test1", "Test2", "Test3", "Test4", 10, 1, 349, 5);
    MainGame("Hacker", "Man", "Cool");
    return 0;
}