#pragma once
#include "Actor.h"

class Goal : public Actor
{
public:
	Goal(int InX = 0, int InY = 0, char InMesh = 'G');
	virtual ~Goal();
};

