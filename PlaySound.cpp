#include "PlaySound.h"
#include <iostream>
#include <unordered_map>

SPlaySound::SPlaySound()
{
}

SPlaySound::~SPlaySound()
{
}

bool SPlaySound::Initialize()
{
	if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048 < 0))
	{
		std::cout << "SDL_mixer could not initialised! SDL_mixer Error" << Mix_GetError()<<std::endl;

		return false;
	}
	return true;
}

void SPlaySound::Shutdown()
{
	if (music) {
		Mix_FreeMusic(music);
		music = nullptr;
	}
	Mix_Quit();
}

bool SPlaySound::LoadSound(const std::string& filePath, const std::string& soundID)
{
	soundEffect = Mix_LoadWAV("Data/bgm.mp3");
	if (soundEffect == nullptr)
	{
		std::cout << "Failed to load sound effects! SDL_mixer Error:" << Mix_GetError() << std::endl;
	}
	return false;
	
}

void SPlaySound::PlaySound(const std::string& soundID)
{
	
}

void SPlaySound::LoadMusic(const std::string& soundID)
{
	music = Mix_LoadMUS("Data/bgm.mp3");
	if (music == nullptr) {
		std::cout << "Failed to load Background Music! SDL_mixer Error: " << Mix_GetError<< std::endl;
		
	}
}

void SPlaySound::PlayMusic()
{
	Mix_PlayMusic(music, -1);
}
