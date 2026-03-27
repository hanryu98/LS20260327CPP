#pragma once
#include "Actor.h"
class Wall : public Actor
{
public:
	Wall(int InX = 0, int InY = 0, char InMesh = '*');
	virtual ~Wall();
};

