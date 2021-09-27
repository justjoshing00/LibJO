#pragma once
#include <math.h>
#include "Constructions.h"

///2-vector operations
Vec2 Add2v(const Vec2 p, const Vec2 q);
Vec2 Subtract2v(const Vec2 p, const Vec2 q);
Vec2 ScalarMutiply2v(const Vec2 p, const float q);
Vec2 Rotate2v(const Vec2 v, const Vec2 angle);

//3-vector operations
Vec3 Add3v(const Vec3 p, const Vec3 q);
Vec3 Subtract3v(const Vec3 p, const Vec3 q);
Vec3 ScalarMutiply3v(const Vec3 p, const float s);
float Magnitude(const Vec3 v);
float Dot3v(const Vec3 p, const Vec3 q);
Vec3 Cross3v(const Vec3 p, const Vec3 q);
//Vec3 Lerp3v(const Vec3 p, const Vec3 q);
Vec3 Normalize3v(const Vec3 v);

// a cross b dot c
float ScalarTriple(const Vec3 p, const Vec3 q, const Vec3 r); 
//b * dot(a,b) / dot (b,b)
Vec3 Projection(const Vec3 p, const Vec3 q);
//a -b * dot(a,b)/dot(b,b)
//Vec3 Rejection(const Vec3 p, const Vec3 q);

//4-vector operations
Vec4 Add4v(const Vec4 p, const Vec4 q);
Vec4 Subtract4v(const Vec4 p, const Vec4 q);
Vec4 ScalarMultiply4v(const Vec4 p, const float s);
Vec4 Normalize4v(const Vec4 v);
float Dot4v(const Vec4 p, const Vec4 q);

//operators multiply, divide,add,subtract, operate-assign,
 Vec3 operator /(const Vec3 v, float s)
{
	s = 1.0f / s;
	return Vec3(v.x * s, v.y * s, v.z * s);
}
 Vec3 operator *(const Vec3 v, const float s)
{
	return Vec3(v.x * s, v.y * s, v.z * s);
}
Vec3 operator +(const Vec3 p, const Vec3 q)
{
	return Vec3(p.x + q.x, p.y + q.y, p.z + q.z);
}
//inline Vec3 operator +=( const Vec3 v)
//{
//	Vec3 output;
//	output.x += v.x;
//	output.y += v.y;
//	output.z += v.z;
//	return output;
//
//}
 Vec3 operator -(const Vec3 p, const Vec3 q)
{
	return Vec3(p.x - q.x, p.y -q.y, p.z - q.z);
}
 Vec3 operator -(const Vec3 v)
{
	return Vec3(-v.x, -v.y, -v.z);
}
//inline Vec3 operator -=(const Vec3 v)
//{
//	Vec3 output;
//	output.x -= v.x;
//	output.y -= v.y;
//	output.z -= v.z;
//	return output;
//}




//matrices




Mat3 Determinant(Mat3 m);
Mat3 Inverse(Mat3 m);
Mat3 rotatex(Mat3 m);
Mat3 rotatey(Mat3 m);
Mat3 rotatez(Mat3 m);

Mat3 operator +(const Mat3 p, const Mat3 q)
{
	    Mat3 result;
	    result[0][0] = p[0][0] + q[0][0],
		result[0][1] = p[0][1] + q[0][1],
		result[0][2] = p[0][2] + q[0][2],

		result[1][0] = p[1][0] + q[1][0],
		result[1][1] = p[1][1] + q[1][1],
		result[1][2] = p[1][2] + q[1][2],

		result[2][0] = p[2][0] + q[2][0],
		result[2][1] = p[2][1] + q[2][1],
		result[2][2] = p[2][2] + q[2][2];
	    return result;

		
}
Mat3 operator -(const Mat3 p, const Mat3 q)
{
	    Mat3 result;
	    result[0][0] = p[0][0] - q[0][0],
		result[0][1] = p[0][1] - q[0][1],
		result[0][2] = p[0][2] - q[0][2],

		result[1][0] = p[1][0] - q[1][0],
		result[1][1] = p[1][1] - q[1][1],
		result[1][2] = p[1][2] - q[1][2],

		result[2][0] = p[2][0] - q[2][0],
		result[2][1] = p[2][1] - q[2][1],
		result[2][2] = p[2][2] - q[2][2];
	    return result;
}
Mat3 operator *(const Mat3& p, const Mat3& q)
{
	return Mat3(p(0,0) * q(0,0) + p(0,1) * q(1,0) + p(0,2) * (2,0),
			    p(0,0) * q(0,1) + p(0,1) * q(1,1) + p(0,2) * (2,1),
			    p(0,0) * q(0,2) + p(0,1) * q(1,2) + p(0,2) * (2,2),
			    p(1,0) * q(0,0) + p(1,1) * q(1,0) + p(1,2) * (2,0),
			    p(1,0) * q(0,1) + p(1,1) * q(1,1) + p(1,2) * (2,1),
			    p(1,0) * q(0,2) + p(1,1) * q(1,2) + p(1,2) * (2,2),
			    p(2,0) * q(0,0) + p(2,1) * q(1,0) + p(2,2) * (2,0),
			    p(2,0) * q(0,1) + p(2,1) * q(1,1) + p(2,2) * (2,1),
			    p(2,0) * q(0,2) + p(2,1) * q(1,2) + p(2,2) * (2,2));
}
Vec3 operator *(const Mat3& m, const Vec3& v)
{
	return Vec3(m(0, 0) * v.x + m(0, 1) * v.y + m(0, 2) * v.z,
				m(1, 0) * v.x + m(1, 1) * v.y + m(1, 2) * v.z,
				m(2, 0) * v.x + m(2, 1) * v.y + m(2, 2) * v.z);
}

Mat4 Determinant4M(Mat4 m);
Mat4 Inverse4M(const Mat4& m);
Mat4 rotatex4M(Mat4 m);
Mat4 rotatey4M(Mat4 m);
Mat4 rotatez4M(Mat4 m);

Mat4 operator +(const Mat4 p, const Mat4 q)
{
	Mat4 result;
	    result[0][0] = p[0][0] + q[0][0],
		result[0][1] = p[0][1] + q[0][1],
		result[0][2] = p[0][2] + q[0][2],

		result[1][0] = p[1][0] + q[1][0],
		result[1][1] = p[1][1] + q[1][1],
		result[1][2] = p[1][2] + q[1][2],

		result[2][0] = p[2][0] + q[2][0],
		result[2][1] = p[2][1] + q[2][1],
		result[2][2] = p[2][2] + q[2][2];

		result[3][0] = p[3][0] + q[3][0],
		result[3][1] = p[3][1] + q[3][1],
		result[3][2] = p[3][2] + q[3][2];
	return result;
}
 Mat4 operator -(const Mat4 p, const Mat4 q)
{
	Mat4 result;
	    result[0][0] = p[0][0] - q[0][0],
		result[0][1] = p[0][1] - q[0][1],
		result[0][2] = p[0][2] - q[0][2],

		result[1][0] = p[1][0] - q[1][0],
		result[1][1] = p[1][1] - q[1][1],
		result[1][2] = p[1][2] - q[1][2],

		result[2][0] = p[2][0] - q[2][0],
		result[2][1] = p[2][1] - q[2][1],
		result[2][2] = p[2][2] - q[2][2];

		result[3][0] = p[3][0] - q[3][0],
		result[3][1] = p[3][1] - q[3][1],
		result[3][2] = p[3][2] - q[3][2];
	return result;
}

//Mat4 operator *(const Mat4 p, const Mat4 q)
//{
//
//}
Vec4 operator *(const Mat4 m, const Vec4 v)
{
	return Vec4(m(0, 0) * v.x + m(0, 1) * v.y + m(0, 2) * v.z + m(0, 3) * v.w,
				m(1, 0) * v.x + m(1, 1) * v.y + m(1, 2) * v.z + m(1, 3) * v.w,
				m(2, 0) * v.x + m(2, 1) * v.y + m(2, 2) * v.z + m(2, 3) * v.w,
				m(3, 0) * v.x + m(3, 1) * v.y + m(3, 2) * v.z + m(3, 3) * v.w);
}


//quaternions
//rotors, i hope
