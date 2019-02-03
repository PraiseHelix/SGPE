#pragma once
#include "Graphics.hpp"
#include "Canvas.hpp"
#include <iostream>
#include <SFML/Graphics.hpp>

/// \brief
/// Class Graphics
/// \details
/// The Graphics class is used for a level as a rendering call
class Graphics {
private:
	std::shared_ptr<Canvas> canvas;
public:
	/// \brief
	/// Constructor
	/// \param canvas The canvas used to render
	Graphics::Graphics(std::shared_ptr<Canvas> canvas):canvas(canvas) {};
public:
	/// \brief
	/// Render function that's filled with the canvas to call for a render
	virtual void Render() = 0;
	~Graphics() {};
};