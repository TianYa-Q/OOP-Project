#ifndef ROUND
#define ROUND

#include "Player.h"

class Round
{
public:
    Player players[2];
    int move[2];

public:
    Round(Player players, int move);
    ~Round();
};

#endif /* ROUND */
