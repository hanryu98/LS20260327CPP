#pragma once
#include "Component.h"
#include "RenderableComponent.h"
#include "SDL.h"

class USpriteComponent : public UComponent, public IRenderableComponent
{
public:
	USpriteComponent();
	~USpriteComponent();

	//UComponent�� ����, Abstract Class, 
	virtual void BeginPlay() override;

	virtual void Tick() override;

	//IRenderableComponent�� ����, Interface��� ����(C++������ ����, Blueprint, C#, java)
	//UE���� ����
	virtual void Render() override;


	SDL_Surface* Image;
	SDL_Texture* Texture;
};
