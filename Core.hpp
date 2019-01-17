#pragma once
#include "GameObject.hpp"
#include "Grid.hpp"
#include "Settings.hpp"
#include "LevelManager.hpp"
#include "InputHandler.hpp"
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
		sf::Event event;
		while (event.type != sf::Event::Closed) {
			Update();
		}
	};
	void Update() {
		levelManager.Update();
	};
	void Start() {
		levelManager.Update();
	};
	~Core() {};
};

