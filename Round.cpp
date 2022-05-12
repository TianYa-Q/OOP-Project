#include "Round.h"
#include "Player.h"

Round::Round(Player *players[2], int move[2])
{
    this->players[0] = players[0];
    this->players[1] = players[1];
    this->move[0] = move[0];
    this->move[1] = move[1];
}

Round::~Round()
{
}