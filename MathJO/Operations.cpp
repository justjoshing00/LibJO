#include "operations.h"


//TODO
//Write 2d rotation
//Write Lerp 
//Test normalize() to see if itll break on divide by zero 
//write operators

Vec2 Add2v(const Vec2 p, const Vec2 q)
{
	Vec2 result;
	result.x = p.x + q.x;
	result.y = p.y + q.y;

	return result;
	//id like to make sure this cause a leak. I just made a local varable, but im returning it from the function. Look up what return does exactly
}

Vec2 Subtract2v(const Vec2 p, const Vec2 q)
{
	Vec2 result;
	result.x = p.x - q.x;
	result.y = p.y - q.y;

	return result;
}

Vec2 ScalarMutiply2v(const Vec2 p, const float s)
{
	Vec2 result;
	result.x = p.x * s;
	result.y = p.y * s;

	return result;
}

Vec2 Rotate2v(const Vec2 v, const Vec2 angle)
{
	return Vec2();
}

Vec3 Add3v(const Vec3 p, const Vec3 q)
{

	Vec3 result;
	result.x = p.x + q.x;
	result.y = p.y + q.y;
	result.z = p.z + q.z;

	return result;
}

Vec3 Subtract3v(const Vec3 p, const Vec3 q)
{
	Vec3 result;
	result.x = p.x - q.x;
	result.y = p.y - q.y;
	result.z = p.z - q.z;
	
	return result;
}

Vec3 ScalarMutiply3v(const Vec3 p, const float s)
{
	Vec3 result;
	result.x = p.x * s;
	result.y = p.y * s;
	result.z = p.z * s;
	return Vec3();
}

float Magnitude(const Vec3 v)
{
	float result = 0.0f;
	result = sqrtf((v.x * v.x) + (v.y * v.y) + (v.z * v.z));
	return result;
}

float Dot3v(const Vec3 p, const Vec3 q)
{
	float result = 0.0f;
	result = (p.x * q.x) + (p.y * q.y) + (p.z + q.z);
	return result;
}

Vec3 Cross3v(const Vec3 p, const Vec3 q)
{
	Vec3 result;
	result.x = p.y * q.z - p.z * q.y;
	result.y = p.z * q.x - p.x * q.z;
	result.z = p.x * q.y - p.y * q.x;

	return result;
}

Vec3 Lerp3v(const Vec3 begin, const Vec3 end, float percent)
{
	return (begin +  (end - begin) * percent);
}

Vec3 Normalize3v(const Vec3 v)
{
	//TODO: test for divide by zero
	Vec3 result;
	float mag = sqrtf((v.x * v.x) + (v.y * v.y) + (v.z * v.z)); //if theres a problem, check here first.
	result.x = v.x / mag;
	result.y = v.y / mag;
	result.z = v.z / mag;

	return result;
}

float ScalarTriple(const Vec3 p, const Vec3 q, const Vec3 r)
{
	Vec3 a = Cross3v(p, q);
	float result = Dot3v(a, r);
	return result;
}

Vec3 Projection(const Vec3 p, const Vec3 q)
{
	Vec3 result = q * (Dot3v(p, q) / Dot3v(q, q));
	return Vec3();
}

Vec3 Rejection(const Vec3 p, const Vec3 q)
{
	Vec3 result = p - q * (Dot3v(p, q) / Dot3v(q, q));
	return Vec3();
}

Vec4 Add4v(const Vec4 p, const Vec4 q)
{
	Vec4 result;
	result.x = p.x + q.x;
	result.y = p.y + q.y;
	result.z = p.z + q.z;
	result.w = p.w + q.w;

	return result;
}

Vec4 Subtract4v(const Vec4 p, const Vec4 q)
{
	Vec4 result;
	result.x = p.x - q.x;
	result.y = p.y - q.y;
	result.z = p.z - q.z;
	result.w = p.w - q.w;

	return result;
}

Vec4 ScalarMultiply4v(const Vec4 p, const float s)
{
	Vec4 result;
	result.x = p.x * s;
	result.y = p.y * s;
	result.z = p.z * s;
	result.w = p.w * s;
	
	return result;
}

Vec4 Normalize4v(const Vec4 v)
{
	Vec4 result;
	float mag = sqrtf((v.x * v.x) + (v.y * v.y) + (v.z * v.z) + (v.w * v.w)); //if theres a problem, check here first.
	result.x = v.x / mag;
	result.y = v.y / mag;
	result.z = v.z / mag;
	result.w = v.w / mag;
	
	return result;
}

float Dot4v(const Vec4 p, const Vec4 q)
{
	float result = 0.0f;
	result = (p.x * q.x) + (p.y * q.y) + (p.z * q.z) + (p.w * q.w);
	
	return result;
}

Mat3 Determinant(const Mat3 m)
{
	 
	(m(0,0) * m(1,1) * m(2,2) - m(1,2) * m(2,1)) +
	(m(0,1) * m(1,2) * m(2,0) - m(1,0) * m(2,2)) +
	(m(0,2) * m(1,0) * m(2,1) - m(1,1) * m(2,0));

	return Mat3();
}

Mat3 Inverse(const Mat3 m)
{
	const Vec3 a = m[0];
	const Vec3 b = m[1];
	const Vec3 c = m[2];

	Vec3 r0 = Cross3v(b, c);
	Vec3 r1 = Cross3v(c, a);
	Vec3 r2 = Cross3v(a, b);

	float invDet = 1.0f / Dot3v(r2, c);

	return Mat3(r0.x * invDet, r0.y * invDet, r0.z * invDet,
				r1.x * invDet, r1.y * invDet, r1.z * invDet,
				r2.x * invDet, r2.y * invDet, r2.z * invDet);
}

Mat3 rotatex(Mat3)
{
	return Mat3();
}

Mat3 rotatey(Mat3)
{
	return Mat3();
}

Mat3 rotatez(Mat3)
{
	return Mat3();
}

Mat4 Determinant4M(Mat4 m)
{
	return Mat4();
}

Mat4 Inverse4M(const Mat4& m)
{
	const Vec3& a = reinterpret_cast<const Vec3&>(m[0]);
	const Vec3& b = reinterpret_cast<const Vec3&>(m[1]);
	const Vec3& c = reinterpret_cast<const Vec3&>(m[2]);
	const Vec3& d = reinterpret_cast<const Vec3&>(m[3]);

	const float& x = (3, 0);
	const float& y = (3, 1);
	const float& z = (3, 2);
	const float& w = (3, 3);

	Vec3 s = Cross3v(a, b);
	Vec3 t = Cross3v(c, d);
	Vec3 u = a * y - b * x;
	Vec3 v = c * w - d * z;

	float invDet = 1.0f / (Dot3v(s, v) + Dot3v(t, u));
	
	s = s *invDet;
	t = t *invDet;
	u = u *invDet;
	v = v *invDet;

	Vec3 r0 = Cross3v(b, v) + t * y;
	Vec3 r1 = Cross3v(v, a) - t * x;
	Vec3 r2 = Cross3v(d, u) + s * w;
	Vec3 r3 = Cross3v(u, c) - s * z;

	float w1 = -Dot3v(b, t);
	float w2 = -Dot3v(a, t);
	float w3 = -Dot3v(d, s);
	float w4 = -Dot3v(c, s);

	return (Mat4 (r0.x, r0.y, r0.z,  w1,
				  r1.x, r1.y, r1.z,  w2,
				  r2.x, r2.y, r2.z,  w3,
				  r3.x, r3.y, r3.z,  w4));
}

Mat4 rotatex4M(Mat4)
{
	return Mat4();
}

Mat4 rotatey4M(Mat4)
{
	return Mat4();
}

Mat4 rotatez4M(Mat4)
{
	return Mat4();
}
