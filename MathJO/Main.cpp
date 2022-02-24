//"Foundations of Game Engine Development Volume 1: Mathematics" by Eric Lengyel, published by Terathon Software LLC, 2016 
// was used as a heavy reference for this work

#include "Tests.h"

int main()
{
	Tests t;
	t.buildvec2test();
	t.buildvec3test();
	t.buildvec4test();

	t.add2test();
	t.subtract2test();
	t.smultiply2test();
	t.rotate2test();

	t.add3test();
	t.subtract3test();

	

	return 0;
}