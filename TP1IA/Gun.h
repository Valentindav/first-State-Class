#pragma once
#include <time.h>

class State;
class FullState;
class LoadedState;
class EmptyState;
class ShootingState;
class ReloadingState;
class Gun
{
	enum state1 {
		Full,
		Loaded,
		Empty,
		Shooting, 
		Reloading,

		Count
	};
	static constexpr int StateCount = static_cast<int>(state1::Count);
	int mAmmo = 6, mCapacity = 6;
	float mReloadTime = 2 , mShootTime = 1, mReloadProgress, mShootProgress;
	state1 mState = state1::Full;

	int mTransition[StateCount][StateCount] = {
		// Full,  Loaded,  Empty,  Shooting,  Reloading
		{     0,      0 ,      0,         1,          0},//Full
		{     0,      0 ,      0,         1,          1},//Loaded
		{     0,      0 ,      0,         0,          1},//Empty
		{     0,      1 ,      1,         0,          0},//Shooting
		{     1,      0 ,      0,         0,          0},//Reloading
	};

	//State* state = new FullState();
public : 																	 
	void Update(float deltaTime);
	void Shoot();
	void Reload();
	bool TransitionTo(state1 newState);
	int GetAmmo();
	int GetCapacity();
	void SetAmmo(int Ammo);
};
