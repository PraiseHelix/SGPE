#pragma once
#include <memory>
#include "Canvas.hpp"

/// \brief
/// Class GameObject
/// \details
/// The GameObject is the default class used for each game object
class GameObject
{
private :
	// The grid is used throughout all the game objects as manipulation mechanism with the render
public:
	GameObject() {};
	/// \brief
	/// onUpdate the update function called by a level's update function
	virtual void onUpdate() = 0;
	/// \brief
	/// onStart the start function called by a level's start functions.
	virtual void onStart() = 0;
	/// \brief
	/// onCollision hit upon collision with another gameObject
	virtual void onCollision() = 0;
	/// \brief
	/// onInteract the function that's used when called upon outside action
	virtual void onInteract() = 0 ;
	/// \brief
	/// onCall the function that's used when called
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



class LevelStorageObject
: public StorageObject {
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
class DrawableGameObject
: public GameObject {
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
	virtual void onRender() = 0;
	~DrawableGameObject() {};
};

class LogicGameObject
: public GameObject {
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
