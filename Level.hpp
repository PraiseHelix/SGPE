#pragma once
#include "Graphics.hpp"
#include "GameObject.hpp"
#include <vector>


class Level
{
private:
	std::vector<GameObject*> gameObjects;
	std::shared_ptr<Graphics> graphics;

public:
	Level(std::vector<GameObject*> gameObjects, std::shared_ptr<Graphics> graphics):gameObjects(gameObjects),  graphics(graphics) {};
	virtual void Update() = 0;
	virtual void Start() = 0;

	virtual void Render() = 0; 
	virtual void Close()  = 0;
	~Level() {};
};


