#pragma once
#include "Actor.h"

class Floor : public Actor
{
public:
	Floor(int InX = 0, int InY = 0, char InMesh = ' ');
	virtual ~Floor();
};

