#ifndef _VEC3_
#define _VEC3_
#include <math.h>

template <class TYPE>
//class string
//string a;
//string b("Hello!");
//string c(b);
//a = "bye";
class Vec3
{
public:
	Vec3();
	Vec3(TYPE x, TYPE y, TYPE z);
	Vec3(TYPE a);
	~Vec3();

	Vec3 operator+ (const Vec3 &vec)const;
	Vec3 operator- (const Vec3 &vec)const;
	Vec3 operator+= (const Vec3 &vec);
	Vec3 operator-= (const Vec3 &vec);
	Vec3 operator= (const Vec3 &vec);
	bool operator== (const Vec3 &vec)const;

	void normalize()const;
	void zero()const;
	bool is_zero()const;
	float distance_to(const Vec3 &vec)const;
	TYPE distance_squared(const Vec3 &vec)const;

	TYPE x, y, z;
};

template <class TYPE>
Vec3<TYPE>::Vec3() {}

template <class TYPE>
Vec3<TYPE>::Vec3(TYPE x, TYPE y, TYPE z) : x(x), y(y), z(z) {}

template <class TYPE>
Vec3<TYPE>::Vec3(TYPE a) : z(a), y(a), z(a) {}

template <class TYPE>
Vec3<TYPE>::~Vec3() {}

template <class TYPE>
Vec3<TYPE> Vec3<TYPE>::operator+(const Vec3 &vec)const
{
	return Vec3<TYPE>(this->x + vec.x, this->y + vec.y, this->z + vec.z);
}

template <class TYPE>
Vec3<TYPE> Vec3<TYPE>::operator-(const Vec3 &vec)const
{
	return Vec3<TYPE>(this->x - vec.x, this->y - vec.y, this->z - vec.z);
}

template <class TYPE>
Vec3<TYPE> Vec3<TYPE>::operator+= (const Vec3 &vec)
{
	return (this->x + vec.x, this->y + vec.y, this->z + vec.z);
}

template <class TYPE>
Vec3<TYPE> Vec3<TYPE>::operator-= (const Vec3 &vec)
{
	return (this->x - vec.x, this->y - vec.y, this->z - vec.z);
}

template <class TYPE>
Vec3<TYPE> Vec3<TYPE>::operator= (const Vec3 &vec)
{
	return (this->x = vec.x, this->y = vec.y, this->z = vec.z);
}

template <class TYPE>
bool Vec3<TYPE>::operator== (const Vec3 &vec)const
{
	return (this->x == vec.x, this->y == vec.y, this->z == vec.z);
}

template <class TYPE>
void Vec3<TYPE>::normalize()const
{
	TYPE module = (sqrt(x * x + y * y + z * z));
	Vec3<TYPE>(x / module, y / module, z / module);
}

template <class TYPE>
void Vec3<TYPE>::zero()const
{
	Vec3<TYPE>(this->x = 0.0f, this->y = 0.0f, this->z = 0.0f);
}

template <class TYPE>
bool Vec3<TYPE>::is_zero()const
{
	return Vec3<TYPE>(this->x == 0.0f, this->y == 0.0f, this->z == 0.0f);
}

template <class TYPE>
float Vec3<TYPE>::distance_to(const Vec3 &vec)const
{
	TYPE distance = sqrt(((x - vec.x) * (x - vec.x)) + ((y - vec.y) * (y - vec.y)) + ((z - vec.z) * (z - vec.z)));
	return distance;
}

template <class TYPE>
TYPE Vec3<TYPE>::distance_squared(const Vec3 &vec)const
{
	TYPE distance_squared = ((x - vec.x) * (x - vec.x)) + ((y - vec.y) * (y - vec.y)) + ((z - vec.z) * (z - vec.z));
	return distance_squared;
}

#endif