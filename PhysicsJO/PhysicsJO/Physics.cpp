#include "Physics.h"
#include <array>


  void linearMotion(float deltaTime, vec3 pos, vec3 vel, vec3 accel, vec3 &resultpos, vec3 &resultvel)
{
	
	 resultpos.x = pos.x + vel.x * deltaTime + accel.x * deltaTime * deltaTime * 0.5f;
	 resultpos.y = pos.y + vel.y * deltaTime + accel.y * deltaTime * deltaTime * 0.5f;
	 resultvel.x = vel.x + accel.x * deltaTime;
	 resultvel.y = vel.y + accel.y * deltaTime;

	 //may need pointer to member variable, test it
	//need to return both position and velocity here, or just call two seperate functions
	  
}

vec3 angularMotion( float deltaTime, float angle,vec3 angvel, vec3 angaccel)
{
	//fix this mess.
	vec3 result;
	//angle = angle + angvel * deltaTime + angaccel * deltaTime * deltaTime * 0.5f;
	//angvel = angvel + angaccel * deltaTime;

	return result;
}
