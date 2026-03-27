#include "World.h"
#include <fstream>

#include "Actor.h"
#include "Player.h"
#include "Monster.h"
#include "Goal.h"
#include "Wall.h"
#include "Floor.h"

UWorld::UWorld()
{
}

UWorld::~UWorld()
{
	for (auto Actor : Actors)
	{
		delete Actor;
	}
	Actors.clear();
}

void UWorld::Load(std::string MapName)
{
	std::ifstream MapStream(MapName);
	int Y = 0;
	while (!MapStream.eof())
	{
		std::string Line;
		std::getline(MapStream, Line);

		for (int X = 0; X < Line.length(); X++)
		{
			char C = Line[X];

			if (C == '*')
			{
				SpawnActor<Wall>()->SetActorLocation(X, Y);
			}
			else if (C == ' ')
			{
				SpawnActor<Floor>()->SetActorLocation(X, Y);
			}
			else if (C == 'P')
			{
				SpawnActor<Player>()->SetActorLocation(X, Y);
			}
			else if (C == 'M')
			{
				SpawnActor<Monster>()->SetActorLocation(X, Y);
			}
			else if (C == 'G')
			{
				SpawnActor<Goal>()->SetActorLocation(X, Y);
			}
		}
		Y++;
	}
}

void UWorld::Tick()
{
	for (auto Actor : Actors)
	{
		Actor->Tick();
	}
}

void UWorld::Render()
{
	for (auto Actor : Actors)
	{
		Actor->Render();
	}
}