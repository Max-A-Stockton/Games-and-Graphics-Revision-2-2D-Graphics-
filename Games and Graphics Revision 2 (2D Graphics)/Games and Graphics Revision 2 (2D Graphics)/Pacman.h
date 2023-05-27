#pragma once
#include "Actor.h"
class Pacman : public Actor
{
public:
	void Update(float deltaTime) override;
	void Draw() override;
};

