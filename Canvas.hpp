#pragma once
#include <memory>
#include <SFML/Graphics.hpp>
/// \brief
/// Class Canvas
/// \details
/// The GameObject is the default class used for each game object
class Canvas
{
private:
public:
	/// \brief
	/// Render the function that's called every frame to render a frame upon a window.
	/// \param window The window used to draw upon
	virtual void Render(std::shared_ptr<sf::RenderWindow> window) = 0;
	~Canvas() {};
};