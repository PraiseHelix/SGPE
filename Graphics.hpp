
#pragma once

#include "Graphics.hpp"
#include "Canvas.hpp"
#include <iostream>
#include <SFML/Graphics.hpp>



class Graphics {
public:
		
	Graphics::Graphics() {};

	virtual void Render() = 0;
	~Graphics() {};
};