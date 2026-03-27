#pragma once
#include <vector>
#include <string>

class Actor;

class UWorld
{
public:
	UWorld();
	virtual ~UWorld();

	template<typename T>
	Actor* SpawnActor()
	{
		Actor* NewActor = new T;
		Actors.push_back(NewActor);

		return NewActor;
	}


	void Load(std::string MapName);

	inline std::vector<class Actor*>& GetActors()
	{
		return Actors;
	}

	void sort();
	void Tick();
	void Render();

protected:
	std::vector<class Actor*> Actors;

};

