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
	virtual void Interact() = 0 ;
	virtual void onCall() = 0;
	~GameObject() {};
};

struct LevelOrder {
	bool Next = false;
	bool Previous = false;
	bool ResetStart = false;
};

class StorageObject
{
	virtual bool onUpdate() = 0;
	virtual void Store() = 0;
};



class LevelStorageObject : public StorageObject
{
private:
	LevelOrder levelOrder;
public:
	LevelStorageObject() :levelOrder(LevelOrder()){}
	virtual bool onUpdate() = 0;
	virtual void onStart() = 0;
	virtual void onCollision() = 0;
	virtual void onInteract() = 0;
	void setNext() {
		levelOrder.Next = true;
	}
	void setPrevious() {
		levelOrder.Previous = true;
	}
	void setResetStart() {
		levelOrder.ResetStart = true;
	}
	LevelOrder onCall() {
		return levelOrder;
	};
};
class DrawableGameObject : public GameObject
{
private:
	std::shared_ptr<Graphics> Canvas;
public:
	DrawableGameObject() {};
	virtual void addCanvas(std::shared_ptr<Graphics> graphics) = 0;
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