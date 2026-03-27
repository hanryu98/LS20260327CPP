#include "Actor.h"
#include <iostream>
#include <Windows.h>

Actor::Actor(int InX, int InY, char InMesh) : X(InX)
{
	X = InX;
	Y = InY;
	Mesh = InMesh;
}

Actor::~Actor()
{
}

void Actor::BeginPlay()
{
}

void Actor::Tick()
{
}

void Actor::Render()
{
	COORD Coordinate;
	Coordinate.X = X;
	Coordinate.Y = Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Coordinate);

	std::cout << Mesh;
}

void Actor::SetActorLocation(int NewX, int NewY)
{
	X = NewX;
	Y = NewY;
}
