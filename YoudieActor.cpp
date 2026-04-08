#include "YoudieActor.h"
#include "TextRenderComponent.h"

AYoudieActor::AYoudieActor()
{
	TextRenderComponent->SetText("Game Over");
	X = 380;
	Y = 300;
	TextRenderComponent->ZOrder = 4000;
	TextRenderComponent->bIsVisible = false;
}

AYoudieActor::~AYoudieActor()
{
}
