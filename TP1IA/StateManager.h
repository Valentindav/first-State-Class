#pragma once
#include "State.h"

class FullState : public State
{
public:
	void Start() override;
	void Update(float deltaTime) override;
};

class LoadedState : public State
{
public:
	void Start() override;
	void Update(float deltaTime) override;
};

class EmptyState : public State
{
public:
	void Start() override;
	void Update(float deltaTime) override;
};

class ShootingState : public State
{
public:
	void Start() override;
	void Update(float deltaTime) override;
};

class ReloadingState : public State
{
public:
	void Start() override;
	void Update(float deltaTime) override;
};





