// i think there may be some uses of contructing implicit versions of these shapes, but idk yet 


struct point
{
private:
	float x, y;
public:
	point(float x_,float y_) 
	{ 
		x = x_;
		y_= y_;
	};
};

struct line
{
private:
	float x, y;
public:
	line(float x_, float y_)
	{
		x = x_;
		y_= y_;
	};
};
struct circle 
{
private:
	float focus;
	float radius;
public:
	circle(float focus_, float radius_)
	{
		focus = focus_;
		radius = radius_;
	};
};
struct rectangle
{
private:
	float sidex;
	float sidey;
public:
	rectangle(float sidex_, float sidey_)
	{
		sidex = sidex_;
		sidey = sidey_;
	};

};
struct triangle
{
private:
	float sidea;
	float sideb;
	float sidec;
public:
	triangle(float sidea_, float sideb_, float sidec_)
	{
		sidea = sidea_;
		sideb = sideb_;
		sidec = sidec_;
	};
};


/*
3D
ray
plane
sphere
box
pyramid
polyhedron
cone
cylinder
*/
