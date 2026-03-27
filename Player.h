#pragma once
#include "Actor.h"
class Player : public Actor
{
public: 
	Player(int InX = 1, int InY = 1, char InMesh = 'P');
	virtual ~Player();

	virtual void BeginPlay() override;
	virtual void Tick() override;
	virtual void Render()override;

};

