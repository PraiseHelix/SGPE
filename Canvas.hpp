#pragma once
#include <memory>
#include <SFML/Graphics.hpp>
class Canvas
{
private:
public:
	virtual void Render(std::shared_ptr<sf::RenderWindow> window) = 0;
	~Canvas() {};
};