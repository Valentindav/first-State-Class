#include "Gun.h"
#include <iostream>

void Gun::Update(float deltaTime) {
	switch (mState) {
	case state1::Shooting :
		mShootProgress += deltaTime;
		while (mShootProgress <= mShootTime) {
		}
		break;
	case state1::Reloading : 
		mReloadProgress += deltaTime;
		if (mReloadProgress >= mReloadTime) {
			mAmmo = mCapacity;
			std::cout << "\nle joueur recharge il a maintenant " << mAmmo << " balle";
			mReloadProgress = 0;
			TransitionTo(state1::Full);
		}
		break;
	case state1::Empty:
		TransitionTo(state1::Reloading);
		break;
	}
}

void Gun::Shoot() {
	/*if (TransitionTo(State::Shooting)) {
		mAmmo -= 1;
		std::cout << "\nle joueur tire il reste " << mAmmo << " balle avant le rechargement ";
		if (mAmmo < mCapacity && mAmmo > 0) {
			TransitionTo(State::Loaded);
		}
		if (mAmmo <= 0) {
			std::cout << "\nle joueur n'a plus de balles, il doit recharger ! ";
			TransitionTo(State::Empty);
		}
	}*/
}

void Gun::Reload() {
	if (TransitionTo(state1::Reloading)) {
	}
}

bool Gun::TransitionTo(state1 newState) {
	int currentStateIndex = static_cast<int>(mState);
	int newStateIndex = static_cast<int>(newState);
	if(mTransition[currentStateIndex][newStateIndex] == 0) return false;
	mState = newState;
	return true;
}

int Gun::GetAmmo() {
	return mAmmo;
}

int Gun::GetCapacity(){
	return mCapacity;
}

void Gun::SetAmmo(int Ammo) {
	Ammo = Ammo;
}