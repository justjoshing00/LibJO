#pragma once

//TODO - Maybe have the indexers check if they use go OOB
//POTENTIAL SOLUTION: could restructure each type of vector to inherit from  somthing that have the neccesary operators in it 

struct Vec2
{
	float x;
	float y;

	Vec2() = default;
	Vec2(float x_, float y_)
	{
		x = x_;
		y = y_;
	}
	
	inline float& operator[](int i);
	inline const float& operator[](int i) const;
};
struct Vec3
{
	float x;
	float y;
	float z;


	Vec3() = default;
	Vec3(float x_, float y_, float z_)
	{
		x = x_;
		y = y_;
		z = z_;

	}

	inline float& operator[](int i);
	inline const float& operator[](int i) const;
};
struct Vec4
{
	float x;
	float y;
	float z;
	float w;

	Vec4() = default;
	Vec4(float x_, float y_, float z_, float w_)
	{
		x = x_;
		y = y_;
		z = z_;
		w = w_;
	}
	//Vec4(Vec3 axis, float angle);

	inline float& operator[](int i);
	inline const float& operator[](int i) const;

};
struct Mat2
{
	float m[2][2];

	Mat2() = default;


	Mat2(float m00, float m01,
		float m10, float m11)
	{
		m[0][0] = m00, m[0][1] = m01,
		m[1][0] = m10, m[1][1] = m11;
	}

	Mat2(Vec2 t,Vec2 u)
	{
		m[0][0] = t.x, m[0][1] = t.y,
		m[1][0] = u.x, m[1][1] = u.y;
	}
	inline float operator ()(int i,int j)
	{
		return (m[j][i]);
	}
	inline const float& operator ()(int i,int j)const
	{
		return (m[j][i]);
	}
	inline Vec3 operator [](int j)
	{
		return (*reinterpret_cast<Vec3*>(m[j]));
	}
	inline const Vec3& operator [](int j)const
	{
		return (*reinterpret_cast<const Vec3*>(m[j]));
	}
};
struct Mat3
{
	float m[3][3];

	Mat3() = default;

	Mat3(float m00, float m01, float m02,
		float m10, float m11, float m12,
		float m20, float m21, float m22)
	{
		m[0][0] = m00, m[0][1] = m01, m[0][2] = m02,
		m[1][0] = m10, m[1][1] = m11, m[1][2] = m12,
		m[2][0] = m20, m[2][1] = m21, m[2][2] = m22;
	}
	Mat3(const Vec3 t, const Vec3 u, const Vec3 v)
	{
		{
			m[0][0] = t.x, m[0][1] = t.y, m[0][2] = t.z,
			m[1][0] = u.x, m[1][1] = u.y, m[1][2] = u.z,
			m[2][0] = v.x, m[2][1] = v.y, m[2][2] = v.z; 
		}
	}
		
	

	inline float operator ()(int i, int j)
	{
		return (m[j][i]);
	}
	inline const float& operator ()(int i, int j)const
	{
		return (m[j][i]);
	}
	inline Vec3 operator [](int j)
	{
		return (*reinterpret_cast<Vec3*>(m[j]));
	}
	inline const Vec3& operator [](int j)const
	{
		return (*reinterpret_cast<const Vec3*>(m[j]));
	}

	/*Mat3 operator *(const Mat3& p, const Mat3& q)
	{
		return Mat3();
	}
	Vec3 operator *(const Mat3& m, const Vec3& v) 
	{
		return Vec3();
	}*/

	
	
};
struct Mat4
{
	float m[4][4];

	Mat4() = default;

	Mat4(float m00, float m01, float m02, float m03,
		 float m10, float m11, float m12, float m13,
		 float m20, float m21, float m22, float m23,
		 float m30, float m31, float m32, float m33)
	{
		m[0][0] = m00, m[0][1] = m01, m[0][2] = m02, m[0][3] = m03,
		m[1][0] = m10, m[1][1] = m11, m[1][2] = m12, m[1][3] = m13;
		m[2][0] = m20, m[2][1] = m21, m[2][2] = m22, m[2][3] = m23,
		m[3][0] = m20, m[3][1] = m21, m[3][2] = m22, m[3][3] = m33;
	}
	Mat4(const Vec4 t, const Vec4 u, const Vec4 v, const Vec4 w)
	{
		m[0][0] = t.x, m[0][1] = t.y, m[0][2] = t.z, m[0][3] = t.w,
		m[1][0] = u.x, m[1][1] = u.y, m[1][2] = u.z, m[1][3] = u.w;
		m[2][0] = v.x, m[2][1] = v.y, m[2][2] = v.z, m[2][3] = v.w,
		m[3][0] = w.x, m[3][1] = w.y, m[3][2] = w.z, m[3][3] = w.w;
	}
	
	inline float operator ()(int i, int j)
	{
		return (m[j][i]);
	}
	inline const float& operator ()(int i, int j)const
	{
		return (m[j][i]);
	}
	inline Vec4 operator [](int j)
	{
		return (*reinterpret_cast<Vec4*>(m[j]));
	}
	inline const Vec4& operator [](int j)const
	{
		return (*reinterpret_cast<const Vec4*>(m[j]));
	}
	
	/*Mat3 operator *(const Mat3& p, const Mat3& q)
	{
		return Mat3();
	}
	Vec3 operator *(const Mat3& m, const Vec3& v)
	{
		return Vec3();
	}*/
	
};