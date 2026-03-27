#include "Player.h"
#include "Engine.h"

#include<iostream>

Player::Player(int InX, int InY, char InMesh)
{
	X = InX;
	Y = InY;
	Mesh = InMesh;
}

Player::~Player()
{
	
}

void Player::BeginPlay()
{
	__super::BeginPlay();
	
}

void Player::Tick()
{
	__super::Tick();
	
}

void Player::Render()
{
	__super::Render();
}