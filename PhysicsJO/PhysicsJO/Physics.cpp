#include "Physics.h"
#include <tuple>

//might want to return a sperate result variable here

void linearMotion(float deltaTime,Body Body2d)
{
	 Body2d.position.x = Body2d.position.x + Body2d.velocity.x * deltaTime + Body2d.acceleration.x * deltaTime * deltaTime * 0.5f;
	 Body2d.position.y = Body2d.position.y + Body2d.velocity.y * deltaTime + Body2d.acceleration.y * deltaTime * deltaTime * 0.5f;

	 Body2d.velocity.x = Body2d.velocity.x + Body2d.acceleration.x * deltaTime;
	 Body2d.velocity.y = Body2d.velocity.y + Body2d.acceleration.y * deltaTime;
}

void angularMotion( float deltaTime, Body Body2d)
{
	Body2d.angle = Body2d.angle + Body2d.angularVelocity * deltaTime + Body2d.angularAcceleration * deltaTime * deltaTime * 0.5f;
	Body2d.angularVelocity = Body2d.angularVelocity + Body2d.angularAcceleration * deltaTime;
}

vec3 applyforce(vec3 force)
{
	return force;
}

vec3 applytorque(vec3 torque)
{
	return torque;
}

