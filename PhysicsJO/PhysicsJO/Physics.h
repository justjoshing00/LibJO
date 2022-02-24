#pragma once
#include "Body.h"

void linearMotion(float deltaTime, Body Body2d);
void angularMotion(float deltaTime,Body Body2d);

vec3 applyforce(vec3 force);

vec3 applytorque(vec3 torque);







