#pragma once

//this is really just created for testing purposes here.
//in reality, id just pull this stuff from the WorldData
struct vec3
{
	float x, y, z;
	vec3() = default;
};
struct body
{
	vec3 position;
	vec3 velocity;
	vec3 acceleration;
};