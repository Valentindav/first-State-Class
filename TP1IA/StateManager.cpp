#include "StateManager.h"
#include <iostream>

//----------------------------------------FullState-----------------------------
void FullState::Start() {
	
}

void FullState::Update(float deltaTime) {
}
//------------------------------------------------------------------------------

//----------------------------------------LoadedState---------------------------
void LoadedState::Start() {
	
}

void LoadedState::Update(float deltaTime) {

}
//------------------------------------------------------------------------------

//----------------------------------------EmptyState----------------------------
void EmptyState::Start() {

}

void EmptyState::Update(float deltaTime) {

}
//------------------------------------------------------------------------------

//----------------------------------------ShootingState-------------------------
void ShootingState::Start() {
	gun->SetAmmo(gun->GetAmmo() - 1);
	std::cout << "\nle joueur tire il reste " << gun->GetAmmo() << " balle avant le rechargement ";
	if (gun->GetAmmo() < gun->GetCapacity() && gun->GetAmmo() > 0) {

	}
	if (gun->GetAmmo() <= 0) {
		std::cout << "\nle joueur n'a plus de balles, il doit recharger ! ";
	}
}

void ShootingState::Update(float deltaTime) {

}
//------------------------------------------------------------------------------

//----------------------------------------ReloadingState------------------------
void ReloadingState::Start() {

}

void ReloadingState::Update(float deltaTime) {

}
//------------------------------------------------------------------------------