
#pragma once

#include "Graphics.hpp"
#include "Canvas.hpp"
#include <iostream>
#include <SFML/Graphics.hpp>



class Graphics {
private:
	std::shared_ptr<Canvas> canvas;
public:
		
	Graphics::Graphics(std::shared_ptr<Canvas> canvas):canvas(canvas) {};

	virtual void Render() = 0;
	~Graphics() {};
};