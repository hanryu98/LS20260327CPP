#pragma once
#include<vector>

class Actor;
class UWorld;

class Engine
{
protected:
	Engine();
	static Engine* Instance;

public:
	~Engine();
	static Engine* GetInstance()
	{
		if (Instance == nullptr)
		{
			Instance = new Engine();			
		}
		return Instance;
	}

	void Init();
	void Term();
	void Run();

	inline UWorld* GetWorld()
	{
		return World;
	}

	static int KeyCode;

protected:
	void Input();
	void Tick();
	void Render();

	class UWorld* World;
	int bIsRunning : 1;

};

#define GEngine		Engine::GetInstance()


