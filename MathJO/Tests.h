#pragma once
#include "Operations.h"
#include <iostream>
class Tests
{
public:
	Tests() = default;


	bool buildvec2test();
	bool buildvec3test();
	bool buildvec4test();

	bool buildmat2test();
	bool buildmat3test();
	bool buildmat4test();


	bool add2test();
	bool subtract2test();
	bool smultiply2test();
	bool rotate2test();

	bool add3test();
	bool subtract3test();
	bool smultiply3test();
	bool mag3test();
	bool dot3est();
	bool cross3test();
	bool lerp3test();
	bool normalize3test();
	
};

