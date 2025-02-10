#pragma once
#include "State.h"

class LoadedState : public State
{
public:
	void Start() override;
	void Update(float deltaTime) override;
};

