#ifndef GAMETABLE
#define GAMETABLE

#include "Player.h"
#include "Round.h"
#include "Message.h"

class GameTable
{
public:
    // 0:Computer 1:Person
    Player *players[2];
    Round *rounds;
    int roundNum;
    int Points;

public:
    GameTable();

    Message addPlayer(Player *newPlayer);
    Message removePlayer(int id);
    std::string showPlayer();
    std::string showPlayer(Player *player);
    void newGame();
    void checkRes(int computerMove, int personMove); // check win or not
    Round getLastFiveRounds();

    ~GameTable();
};

#endif /* GAMETABLE */
