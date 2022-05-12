#ifndef PERSON
#define PERSON

#include <string>

#include "Player.h"

class Person : public Player
{
public:
    Person(string name);

    int move();

    ~Person();
};

#endif /* PERSON */
