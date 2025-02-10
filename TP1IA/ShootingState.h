#pragma once
#include "State.h"

class ShootingState : public State
{
public:
	void Start() override;
	void Update(float deltaTime) override;
};

