#include <iostream>
#include <string>
#include <map>

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

    // An end-user can change the state of an object.
    // Usefully allocates memory from the heap using new and is correctly freed with delete
    // creat new player
    Player *computer = new Computer();
    Player *person = new Person(name);

    players[0] = computer;
    players[1] = person;
}

// start a new game
void GameTable::newGame()
{
    // get computer move
    int computerMove = players[0]->move();

    // get person move
    int personMove = players[1]->move();

    this->checkRes(computerMove, personMove);
}

// 0:even, 1:person win, 2:person fail
void GameTable::checkRes(int computerMove, int personMove)
{
    map<int, string> resMap;
    resMap[0] = "Even, not bad.";
    resMap[1] = "Win! Congratulation!!!";
    resMap[2] = "Fail Don’t panic!!!";

    map<int, string> moveMap;
    moveMap[1] = "Rock";
    moveMap[2] = "Scissor";
    moveMap[3] = "Paper";

    int res;

    // Even situation
    if (computerMove == personMove)
    {
        res = 0;
    }
    else
    {
        // Switch other two situations
        switch (personMove)
        {
        case 1: // Rock
            if (computerMove == 2)
            {
                res = 1;
            }
            else
            {
                res = 2;
            }
            break;

        case 2: // Scissor
            if (computerMove == 3)
            {
                res = 1;
            }
            else
            {
                res = 2;
            }
            break;

        case 3: // Paper
            if (computerMove == 1)
            {
                res = 1;
            }
            else
            {
                res = 2;
            }
            break;
        }
    }

    // It is interactive by giving feedback to the user and receiving input from the user
    cout << "========================================\n";
    cout << "Result:" << resMap[res] << endl
         << "Computer:" << moveMap[computerMove]
         << "      "
         << "You:" << moveMap[personMove] << endl;
}

GameTable::~GameTable()
{
    delete players[0];
    delete players[1];
}