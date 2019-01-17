#pragma once
#include <vector>


// TODO Make levelManager gameObject that'll be used to check states

class LevelManager
{
private:

public:
	LevelManager() {};
	~LevelManager() {};
	virtual void Start() = 0;
	virtual void Update() = 0;
	virtual void Render() = 0;

};

