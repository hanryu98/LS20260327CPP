#include <iostream>
#include "Engine.h"
#include "World.h"
#include <functional>


#include "Actor.h"
#include "Floor.h"
#include "SpriteComponent.h"
#include "RenderableComponent.h"

#define FActorBeginOverlapSingnature std::function<void (class AActor*)>

void ProcessBeginOverLap(class AAtor* OtherActor)
{

}


void Test()
{
	std::cout << "Test" << std::endl;
}

int SDL_main(int argc, char* argv[])
{
	//함수 포인터
	//callback
	//class 결합도를 낮춘다
	void (*fn)();
	fn = Test;

	std::function<void()> f1;
	int A = 10;
	f1 = [&]() ->void
		{
			std::cout << A << std::endl;
		};

	f1();


	GEngine->GetWorld()->Load("level01.txt");

	GEngine->Run();

	delete GEngine;

	return 0;
}


