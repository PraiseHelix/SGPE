#pragma once
#include "Canvas.hpp"
#include <memory>
#include "Graphics.hpp"
#include <SFML/Graphics.hpp>


// TODO check all includes for duplicates and iostreams

// SFML window requires the renderwindow functions
class GraphicsSFML : public Graphics
{
private:
	std::shared_ptr<sf::Window> window;
	std::shared_ptr<Canvas> canvas;
public:
	GraphicsSFML(std::shared_ptr<sf::Window> window, std::shared_ptr<Canvas> Canvas) :window(window), canvas(canvas) {};

	void Render() {
	};
	~GraphicsSFML() {

	};
};

