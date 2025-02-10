#pragma once
#include "State.h"

class EmptyState : public State
{
public:
	void Start() override;
	void Update(float deltaTime) override;
};

