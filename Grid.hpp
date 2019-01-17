#pragma once
#include "Canvas.hpp"
class Grid: public Canvas
{
public:
	Grid();
	bool validMove(int currentIndex, int direction);
	int move(int currentIndex, int ID, int direction);
	int getType(int currentIndex, int direction);
	~Grid();
};

