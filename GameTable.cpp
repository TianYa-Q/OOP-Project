#include <iostream>
#include <string>

#include "GameTable.h"
#include "Computer.h"
#include "Person.h"

using namespace std;

GameTable::GameTable()
{
    cout << "Welcome to our Game Shop! \n"
            "Press Enter to sit in your Game Table!";
    cin.get();

    cout << "========================================\n";

    cout << "Start a new game life! \n"
            "Give you free points: 5 \n"
            "If you lose all points. You will be terminated.( p_q) \n"
            "Final, Please Input your name and press Enter: ";

        string name;
    cin >> name;

    cout << "========================================\n";

    Player *computer = new Computer();
    Player *person = new Person(name);

    players[0] = computer;
    players[1] = person;
}

// start a new game
void GameTable::newGame()
{
    // get computer move
    players[0]->move();

    // get person move
    players[1]->move();
}

GameTable::~GameTable()
{
}