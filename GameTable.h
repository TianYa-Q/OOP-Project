#ifndef GAMETABLE
#define GAMETABLE

#include "Player.h"
#include "Round.h"
#include "Message.h"

class GameTable
{
public:
    Player players[2];
    Round *rounds;
    int roundNum;
    int Points;

public:
    GameTable(/* args */);

    Message addPlayer(Player newPlayer);
    Message removePlayer(int id);
    std::string showPlayer();
    std::string showPlayer(Player player);
    void newGame(); // ask players in this table to choose one move.
    Round getLastFiveRounds();

    ~GameTable();
};

#endif /* GAMETABLE */
