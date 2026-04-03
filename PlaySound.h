#pragma once

#include "SDL_ttf.h"
#include "SDL_mixer.h"
#include <string>

#pragma comment(lib, "SDL2_ttf")
#pragma comment(lib, "SDL2_mixer")


class SPlaySound
{
public:
	SPlaySound();
	virtual ~SPlaySound();

	bool Initialize();
	void Shutdown();
	bool LoadSound(const std::string& filePath, const std::string& soundID);
	void PlaySound(const std::string& soundID);
	void LoadMusic(const std::string& soundID);
	void PlayMusic();

private:
	Mix_Chunk* soundEffect;
	Mix_Music* music;
};


