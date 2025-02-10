#pragma once
#include "Gun.h"

class State
{
public : 
	Gun* gun = new Gun();
	virtual void Start() = 0;
	virtual void Update(float deltaTime) = 0;
};

