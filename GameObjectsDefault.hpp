#pragma once
#include "GameObject.hpp"
#include "Grid.hpp"
#include "InputHandler.hpp"
#include <memory>
class NPC :
	public DrawableGameObject
{
private :
	std::vector<char> command;
	std::shared_ptr<Grid> grid;
public:
	void addGrid(std::shared_ptr<Grid> grid);
	void onUpdate();
	void onStart();
	void onCollision();
	void Interact();
	void onCall();
	NPC();
	~NPC();
};

class Player :
	public DrawableGameObject

{
private:
	// TODO gameobject id
	std::shared_ptr<Grid> grid;
	std::unique_ptr<InputHandler> input;
protected:
	int currentIndex;
public:
	Player();
	~Player();
	void addGrid(std::shared_ptr<Grid> grid);
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

#include "GameObjectsDefault.hpp"
#include "Grid.hpp"
#include "InputHandler.hpp"
#include <iostream>
#include <memory>

#include "GameObjectsDefault.hpp"

#include <iostream>

NPC::NPC() {}
NPC::~NPC()
{
}

void NPC::addGrid(std::shared_ptr<Grid> grid) {
	this->grid = grid;

}
void NPC::onUpdate()
{

}
void NPC::onCall()
{
}
void NPC::onStart()
{
}
void NPC::onCollision()
{
}
void NPC::Interact()
{
}
;

Player::Player()
{
}
Player::~Player()
{
}

void Player::addGrid(std::shared_ptr<Grid> grid) {
	this->grid = grid;
}

void Player::ButtonAction(const sf::Keyboard::Key key) {

	int direction;
	switch (key)
	{
	case sf::Keyboard::Key::A:
		direction = 1;
		break;
	case sf::Keyboard::Key::W:
		direction = 2;
		break;
	case sf::Keyboard::Key::S:
		direction = 3;
		break;
	case sf::Keyboard::Key::D:
		direction = 4;
		break;
	default:
		return;

		if (grid->validMove(currentIndex, direction)) {
			// TODO Activate int futureType = grid->getType(currentIndex, direction);
			grid->move(currentIndex, 0, direction);
			//onCollision(); // on collision with objects should decide if actions are

		}



	}
}

void Player::onUpdate()
{

	// acquiring the key commands
	auto lstCommands = input->getKeybindings();
	if (lstCommands.size() != 0) {
		for (auto z : lstCommands) {
			ButtonAction(z);
		}
	}

	// TODO Opposing commands i.e pressing up and down at the same time probably shouldn't do anything

}
void Player::onCall()
{
}
void Player::onStart()
{
	// creating input handler
	this->input = std::make_unique<InputHandler>();

	std::vector<sf::Keyboard::Key> default_keys = { sf::Keyboard::Key::W,sf::Keyboard::Key::A, sf::Keyboard::Key::S, sf::Keyboard::Key::D };
	this->input->addKeyBindings(default_keys);

	if (grid != NULL) {
		this->currentIndex = 0;
	}
}

void Player::onCollision()
{
	// switch case depending on the object type i.e gameobject
}
void Player::Interact()
{

};

