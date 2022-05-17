#include "Computer.h"
#include "Player.h"

#include <random>

using namespace std;

Computer::Computer() : Player("Computer", 0)
{
}

int Computer::move()
{
    random_device generator;
    uniform_int_distribution<int> distribution(1, 3);

    int move = distribution(generator);

    return move;
}

Computer::~Computer()
{
}