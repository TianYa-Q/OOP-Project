#ifndef COMPUTER
#define COMPUTER

#include "Player.h"

class Computer : public Player
{
private:
    /* data */
public:
    Computer();

    int move();

    ~Computer();
};

#endif /* COMPUTER */
