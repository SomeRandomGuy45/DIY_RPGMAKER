/*
This is a random libary bc yeah
*/

#include <iostream>
#include <string>

using namespace std;

int randomInt(int start, int range)
{
    return (start + rand() % range);
}

string randomString(int len)
{
    string str;
    for (int i = 0; i < len; i++)
    {
        char ch = 'A' + rand() % 26;
        str.push_back(ch);
    }
    return str;
}
