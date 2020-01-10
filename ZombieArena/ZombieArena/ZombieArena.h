#pragma once
#include "Zombie.h"

using namespace sf;

int createBackground(VertexArray& rVa, IntRect arena);
Zombie* createHorde(int numZombies, IntRect arena);
