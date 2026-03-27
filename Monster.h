#pragma once
#include "Actor.h"


class Monster : public Actor
{
public: 
	Monster(int InX = 0, int InY = 0, char InMesh = 'M');
	virtual ~Monster();
};

