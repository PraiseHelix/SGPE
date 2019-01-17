#pragma once
#include "Graphics.hpp"
#include "GameObject.hpp"
#include <vector>


class Level
{
private:
	std::vector<GameObject*> gameObjects;
	Graphics & graphics;

public:
	Level(std::vector<GameObject*> gameObjects, Graphics & graphics):gameObjects(gameObjects),  graphics(graphics) {};
	virtual void Update() = 0;
	virtual void Start() = 0;

	virtual void Render() = 0; 
	~Level() {};
};


