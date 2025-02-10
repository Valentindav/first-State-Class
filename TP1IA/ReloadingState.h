#pragma once
#include "State.h"

class ReloadingState : public State
{
public:
	void Start() override;
	void Update(float deltaTime) override;
};

