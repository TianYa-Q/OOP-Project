#include <string>
#include <iostream>

#include "Person.h"
#include "Player.h"

using namespace std;

Person::Person(string name) : Player(name, 1)
{
}

int Person::move()
{
    // Has an intuitive and functional user menu.
    // ask for move
    cout << "Please choose your move: \n"
            "1. Rock \n"
            "2. Scissor \n"
            "3. Paper \n"
            "4. Leave the table \n"
            "Enter a number from the options above and press Enter: ";

    int move;
    cin >> move;

    return move;
}

Person::~Person()
{
}