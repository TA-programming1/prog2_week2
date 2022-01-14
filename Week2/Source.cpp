#include <iostream>
#include "Vector3.h"
#include "Actor.h"
int main()
{
	//Vector3 someVector;
	//Vector3 someOtherVector{5, 6, 7};

	//Vector3 sumVector;
	//std::cout << "x: " << sumVector.x << " y: " << sumVector.y << " z: " << sumVector.z << "\n";
	//sumVector = someVector + someOtherVector;
	//std::cout << "x: " << sumVector.x << " y: " << sumVector.y << " z: " << sumVector.z << "\n";

	Pawn character;
	Vector3 position = character.getPosition();
	std::cout << "x: " << position.x << " y: " << position.y << " z: " << position.z << "\n";
	character.setPosition(Vector3{ 7,3,2 });
	position = character.getPosition();
	std::cout << "x: " << position.x << " y: " << position.y << " z: " << position.z << "\n";


	return 0;
}