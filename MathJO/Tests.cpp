#include "Tests.h"
#include <math.h>

// 1-2 tests each function
// test if it builds and initializes okay
// test if it produces one expected output
// if ( 1.2 == v.x ) print "Test 1 ok"
// else print "test 1 not ok"

bool Tests::buildvec2test()
{
	bool sucess = true;
	Vec2 v1;
	Vec2 v2(0,0);
	Vec2 testcase1(0,0);

	if (v2.x == testcase1.x && v2.y == testcase1.y)
	{
		std::cout << "vector 2 built correctly" << std::endl;
		return sucess;
	}
	else
	{
		std::cout << "vector 2 did not build correctly" <<std::endl;
		sucess = false;
		return sucess;
	}
}

bool Tests::buildvec3test()
{
	bool sucess = true;
	Vec2 v1;
	Vec3 v2(0, 0, 0);
	Vec3 testcase1(0, 0,0);

	if (v2.x == testcase1.x && v2.y == testcase1.y && v2.z == testcase1.z)
	{
		std::cout << "vector 3 built correctly" << std::endl;
		return sucess;
	}
	else
	{
		std::cout << "vector 3 did not build correctly" << std::endl;
		sucess = false;
		return sucess;
	}
}

bool Tests::buildvec4test()
{
	bool sucess = true;
	Vec2 v1;
	Vec4 v2(0, 0, 0,0);
	Vec4 testcase1(0, 0,0,0);

	if (v2.x == testcase1.x && v2.y == testcase1.y && v2.z == testcase1.z && v2.w == testcase1.w)
	{
		std::cout << "vector 4 built correctly" << std::endl;
		return sucess;
	}
	else
	{
		std::cout << "vector 4 did not build correctly" << std::endl;
		sucess = false;
		return sucess;
	}
}

bool Tests::buildmat2test()
{
	return false;
}

bool Tests::buildmat3test()
{
	return false;
}

bool Tests::buildmat4test()
{
	return false;
}

bool Tests::add2test()
{
	Vec2 v1(2, 2);
	Vec2 v2(3, 3);
	Vec2 testcase1 (5,5);
	Vec2 result = Add2v(v1, v2);
	bool sucess = true;
	if (result.x == testcase1.x && result.y == testcase1.y)
	{
		std::cout << "2vector addition works fine" << std::endl;
		return sucess;
	}
	else
	{
		std::cout << "2vector addition doesnt work, check add2v function" << std::endl;
		sucess = false;
		return sucess;
	}
    
	return false;
}

bool Tests::subtract2test()
{

	Vec2 v1(2, 2);
	Vec2 v2(3, 3);
	Vec2 testcase1(-1, -1);
	Vec2 result = Subtract2v(v1, v2);
	bool sucess = true;
	if (result.x == testcase1.x && result.y == testcase1.y)
	{
		std::cout << "2vector subtraction works fine" << std::endl;
		return sucess;
	}
	else
	{
		std::cout << "2vector subtraction doesnt work, check subtract2v function" << std::endl;
		sucess = false;
		return sucess;
	}

	return false;
}

bool Tests::smultiply2test()
{
	Vec2 v1(2, 4);
	float s = 3;
	Vec2 testcase1(6,12);
	Vec2 result = ScalarMutiply2v(v1, s);
	bool sucess = true;
	if (result.x == testcase1.x && result.y == testcase1.y)
	{
		std::cout << "2vector scalar mutiply works fine" << std::endl;
		return sucess;
	}
	else
	{
		std::cout << "2vector scalar mutiply doesnt work, check ScalarMultiply function" << std::endl;
		sucess = false;
		return sucess;
	}

	return false;
}

bool Tests::rotate2test()
{

	Vec2 v1(2, 4);
	float AOR = 90;
	float NAOR = -90;
	Vec2 testcase1(1,1); // test clockwise
	Vec2 testcase2(1,1); //test counterclockwise

	Vec2 result = Rotate2v(v1, AOR);
	Vec2 result2 = Rotate2v(v1, NAOR);
	
	bool success1 = true;
	bool success2 = true;
	
	
	
	
}

bool Tests::add3test()
{
	Vec3 v1(1, 1, 1);
	Vec3 v2(2, 2, 2);

	Vec3 testcase1(3, 3, 3);
	Vec3 result = Add3v(v1,v2);

	bool sucess = true;
	if (result.x == testcase1.x && result.y == testcase1.y)
	{
		std::cout << "3vector addition works fine" << std::endl;
		return sucess;
	}
	else
	{
		std::cout << "3vector addition doesnt work, check add3v function" << std::endl;
		sucess = false;
		return sucess;
	}

	

}

bool Tests::subtract3test()
{
	Vec3 v1(3, 3, 3);
	Vec3 v2(2, 2, 2);

	Vec3 testcase1(1, 1, 1);
	Vec3 result = Subtract3v(v1, v2);

	bool sucess = true;
	if (result.x == testcase1.x && result.y == testcase1.y)
	{
		std::cout << "3vector addition works fine" << std::endl;
		return sucess;
	}
	else
	{
		std::cout << "3vector addition doesnt work, check add3v function" << std::endl;
		sucess = false;
		return sucess;
	}
	
}

bool Tests::smultiply3test()
{
	return false;
}

bool Tests::mag3test()
{
	return false;
}

bool Tests::dot3est()
{
	return false;
}

bool Tests::cross3test()
{
	return false;
}

bool Tests::lerp3test()
{
	return false;
}

bool Tests::normalize3test()
{
	return false;
}
