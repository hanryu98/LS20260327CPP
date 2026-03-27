#pragma once

class Actor
{
public:
	Actor(int InX = 0, int InY = 0, char InMesh = ' ');
	virtual ~Actor();

	virtual void BeginPlay();
	virtual void Tick();
	virtual void Render();

	void SetActorLocation(int NewX, int NewY);

protected:
	int X;
	int Y;
	int Mesh;
};

