#pragma once
#include "GameObject.hpp"
#include "Settings.hpp"
#include "LevelManager.hpp"
#include "Graphics.hpp"
#include <SFML\Graphics.hpp>


// TODO C implementation for this call
#define SFML_DEFINE_DISCRETE_GPU_PREFERENCE

class Core
{
private:
	LevelManager & levelManager;
protected:
	
public:
	Core(LevelManager & levelManager) :levelManager(levelManager) {};

	void Run() {
			Update();
	};
	void Update() {
		levelManager.Update();
	};
	void Start() {
		levelManager.Update();
	};
	~Core() {};
};

