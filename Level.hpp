#pragma once
#include "Graphics.hpp"
#include "GameObject.hpp"
#include <vector>

/// \brief
/// The Level class
/// \details
/// The level class is used to point to the gameobject and graphics to activate and call
class Level
{
private:
	std::vector<GameObject*> gameObjects;
	std::shared_ptr<Graphics> graphics;

public:
	Level(std::vector<GameObject*> gameObjects, std::shared_ptr<Graphics> graphics):gameObjects(gameObjects),  graphics(graphics) {};
	/// \brief
	/// The update function is called every frame
	virtual void Update() = 0;
	/// \brief
	/// The start function is called every level start
	virtual void Start() = 0;
	/// \brief
	/// The Render function is called every frame to display to screen
	virtual void Render() = 0; 
	/// \brief
	/// The close function is used when the level closes off
	virtual void Close()  = 0;
	~Level() {};
};


