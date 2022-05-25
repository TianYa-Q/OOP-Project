#include "Player.h"

#include <iostream>

Player::Player(string name, int type) : name(name), type(type) {}

Player::~Player()
{
    // cout << "delete Player" << endl;
}