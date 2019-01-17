#pragma once
#include "GameObject.hpp"
#include "Canvas.hpp"
#include "InputHandler.hpp"
#include <memory>

class NPC :
	public DrawableGameObject
{
private :
	std::vector<char> command;
	std::shared_ptr<Canvas> canvas;
public:
	
	NPC(std::vector<char> command, std::shared_ptr<Canvas> canvas) :command(command), canvas(canvas) {}
	void onUpdate();
	void onStart();
	void onCollision();
	void Interact();
	void onCall();

	~NPC();
};

class Player :
	public DrawableGameObject

{
private:
	// TODO gameobject id
	std::shared_ptr<Canvas> canvas;
	std::unique_ptr<InputHandler> input;
protected:
	int currentIndex;
public:
	Player(std::shared_ptr<Canvas> canvas, std::unique_ptr<InputHandler> input) :canvas(canvas), input(input) {};
	~Player();
	void ButtonAction(const sf::Keyboard::Key key);
	void onUpdate();
	void onCall();
	void onStart();
	void onCollision();
	void Interact();
	int getCurrentIndex() {
		return currentIndex;
	}
};

