#include "Physics.h"
#include <array>
#include <vector>


 vec3 linearMotion(float deltaTime, vec3 pos, vec3 vel, vec3 accel)
{
	 pos.x = pos.x + vel.x * deltaTime + accel.x * deltaTime * deltaTime * 0.5f;
	 pos.y = pos.y + vel.y * deltaTime + accel.y * deltaTime * deltaTime * 0.5f;
	 vel.x = vel.x + accel.x * deltaTime;
	 vel.y = vel.y + accel.y * deltaTime;

	 return pos;
}

vec3 angularMotion( float deltaTime, float angle,vec3 angvel, vec3 angaccel)
{
	//fix this mess.
	vec3 result;
	//angle = angle + angvel * deltaTime + angaccel * deltaTime * deltaTime * 0.5f;
	//angvel = angvel + angaccel * deltaTime;

	return result;
}
