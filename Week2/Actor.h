#pragma once
#include "Vector3.h"
#include <iostream>
class Actor
{
public:
	Vector3 getPosition() const { return position; }
protected:
	std::string name;
	Vector3 position{};
};

class Pawn : public Actor
{
public:
	void setPosition(Vector3 newPosition);
};
