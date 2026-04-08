#include "BGActor.h"
#include "AudioComponent.h"


ABGActor::ABGActor()
{
	Audio = CreateDefaultSubobject<UAudioComponent>("Audio");
	Audio->Load("./daga/bgm.mp3");
}

ABGActor::~ABGActor()
{

}

void ABGActor::BeginPlay()
{
	__super::BeginPlay();
	
	Audio->Play();
}
