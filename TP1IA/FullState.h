#pragma once
#include "State.h"

class FullState : public State
{
public :
	void Start() override;
	void Update(float deltaTime) override;
};

