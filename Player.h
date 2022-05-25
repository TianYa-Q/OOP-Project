#ifndef PLAYER
#define PLAYER

#include <string>

using namespace std;

class Player
{
public:
    std::string name;
    int type;

public:
    Player(string name, int type);
    virtual int move() = 0;
    virtual ~Player();
};

#endif /* PLAYER */
