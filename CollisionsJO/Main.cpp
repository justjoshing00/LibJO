// work heavily referenced from "http://www.jeffreythompson.org/collision-detection/table_of_contents.php"
// print/return false if i call one of the functions im not using
// make sure it prints the function name as well

#include <iostream>
#include <math.h>
struct vec3
{
	float x = 0.0;
	float y = 0.0;


	vec3();
	vec3(float x_, float y_);

};

struct Circle
{
	vec3 pos;
	float r = 0.0;
};

struct Rectangle
{
	vec3 pos;
	float length;
	float width;

};

struct Line
{
	vec3 pos;
	float pointA;
	float pointB;
};

struct Triangle
{
	vec3 pos;
	float sideA;
	float sideB;
	float sideC;
};

struct Polygon
{
	vec3 pos;
	//???????
};

vec3::vec3()
{

}
vec3::vec3(float x_, float y_)
{
	x = x_;
	y = y_;

}

bool pointpoint(vec3 p, vec3 q)
{
	bool collided = false;

	//why does if (p == q) not work here?
	if (p.x && p.y == q.x && q.y)
	{
		collided = true;
	}

	return collided;
}

bool pointcircle(vec3 point, Circle circle)
{
	bool collided = false;

	float distx = point.x - circle.pos.x;
	float disty = point.y - circle.pos.y;

	float distance = sqrt((distx * distx) + (disty * disty));

	if (distance <= circle.r)
	{
		collided = true;
	}

	return collided;
}

bool circlecircle(Circle p, Circle q)
{
	bool collided = false;

	float distx = p.pos.x - q.pos.x;
	float disty = p.pos.y - q.pos.y;

	float distance = sqrt((distx * distx) + (disty * disty));

	if (distance <= p.r + q.r)
	{
		collided = true;
	}
	return collided;
}

bool pointRectangle(vec3 point, Rectangle rect)
{
	bool collided = false;
	if (point.x <= rect.pos.x &&
		point.x >= rect.pos.x + rect.width &&    // left of the right edge AND
		point.y >= rect.pos.y &&         // below the top AND
		point.y <= rect.pos.y + rect.length)     // above the bottom
	{
		collided = true;
	}
	return collided;
}

bool rectangleRectangle(Rectangle rectA, Rectangle rectB)
{
	//aabb bounding boxes
	bool collided = false;
	if (rectA.pos.x + rectA.width >= rectB.pos.x &&
		rectA.pos.x <= rectB.pos.x + rectB.width &&
		rectA.pos.y + rectA.length >= rectB.pos.y &&
		rectA.pos.y <= rectB.pos.y + rectB.length)
	{
		collided = true;
	}

	return collided;
}

bool rectangleCircle(Rectangle rect, Circle circle)
{
	bool collision = false;
	float testX = 0.0;
	float testY = 0.0;
	if (circle.pos.x < rect.pos.x)
	{
		testX = rect.pos.x;
	}// left edge
	else if (circle.pos.x > rect.pos.x + rect.width)
	{
		testX = rect.pos.x + rect.width;     // right edge
	}
	if (circle.pos.y < rect.pos.y)
	{
		testY = rect.pos.y;        // top edge
	}
	else if (circle.pos.y > rect.pos.y + rect.length)
	{
		testY = rect.pos.y + rect.length;     // bottom edge	
	}

	float distX = circle.pos.x - testX;
	float distY = circle.pos.y - testY;
	float distance = sqrt((distX * distX) + (distY * distY));

	if (distance < circle.r)
	{
		return collision;
	}
}

bool linePoint(Line line, vec3 point)
{

}
bool lineLine(Line lineA, Line lineB)
{

}

bool lineCircle(Line line, Circle circle)
{

}
bool lineRectangle(Line line, Rectangle rect)
{

}

bool polygonPoint(Polygon poly, vec3 point)
{

}

bool polygonLine(Polygon poly, Line line)
{

}
bool polygonCircle(Polygon poly, Circle circle)
{

}
bool polygonRectangle(Polygon poly, Rectangle Rect)
{

}
bool polygonPolygon(Polygon polyA, Polygon polyB)
{

}

int main()
{
	vec3 a;
	vec3 b;

	Circle ca;
	Circle cb;

	Rectangle sa;
	Rectangle sb;
}