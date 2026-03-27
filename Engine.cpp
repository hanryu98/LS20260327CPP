#include "Engine.h"
#include <conio.h>
#include "Actor.h"
#include "World.h"

Engine* Engine::Instance = nullptr;
int Engine::KeyCode = 0;

Engine::Engine()
{
	Init();
}

Engine::~Engine()
{
	Term();
}

void Engine::Init()
{
	bIsRunning = true;
	World = new UWorld();
}

void Engine::Term()
{
	delete World;
	World = nullptr;
}

void Engine::Run()
{
	while (bIsRunning)
	{
		Input();
		Tick();
		Render();
	}
}

void Engine::Input()
{
	KeyCode = _getch();
}

void Engine::Tick()
{
	World->Tick();
}

void Engine::Render()
{
	World->Render();
}
