#pragma once
#include <memory>
#include "Canvas.hpp"
class GameObject
{
private :
	// The grid is used throughout all the game objects as manipulation mechanism with the render
public:
	GameObject() {};
	virtual void onUpdate() = 0;
	virtual void onStart() = 0;
	virtual void onCollision() = 0;
	virtual void onInteract() = 0 ;
	virtual void onCall() = 0;
	~GameObject() {};
};


class StorageObject
{
	virtual bool onUpdate() = 0;
	virtual void Store() = 0;
};



class DrawableGameObject : public GameObject
{
private:
	std::shared_ptr<Canvas> canvas;
public:
	DrawableGameObject() {};
	DrawableGameObject(std::shared_ptr<Canvas> canvas):canvas(canvas) {};
	virtual void onUpdate() = 0;
	virtual void onStart() = 0;
	virtual void onCollision() = 0;
	virtual void onInteract() = 0;
	virtual void onCall() = 0;
	~DrawableGameObject() {};
};

class LogicGameObject : public GameObject
{
private:
public:
	LogicGameObject() {};
	virtual void onUpdate() = 0;
	virtual void onStart() = 0;
	virtual void onCollision() = 0;
	virtual void onInteract() = 0;
	virtual void onCall() = 0;
	~LogicGameObject() {};
};