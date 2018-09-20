#ifndef _VEC3_
#define _VEC3_

template <class type>

class Vec3
{
public:
	Vec3();
	Vec3(type x, type y, type z);
	Vec3(type a);
	~Vec3();

	Vec3 operator+ (const Vec3 &vec)const;
	Vec3 operator- (const Vec3 &vec)const;
	Vec3 operator+= (const Vec3 &vec)const;
	Vec3 operator-= (const Vec3 &vec)const;
	bool operator= (const Vec3 &vec)const;
	bool operator== (const Vec3 &vec)const;

	void normalize()const;
	void zero()const;
	bool is_zero()const;
	void distance_to()const;

private:
	type x, y, z;
};

template <class type>
Vec3<type>::Vec3() {}

template <class type>
Vec3<type>::Vec3(type x, type y, type z) : x(x), y(y), z(z) {}

template <class type>
Vec3<type>::Vec3(type a) : z(a), y(a), z(a) {}

template <class type>
Vec3<type>::~Vec3() {}

template <class type>
Vec3<type> Vec3<type>::operator+(const Vec3 &vec)const
{
	return Vec3<type>(this->x + vec.x, this->y + vec.y, this->z + vec.z);
}

template <class type>
Vec3<type> Vec3<type>::operator-(const Vec3 &vec)const
{
	return Vec3<type>(this->x - vec.x, this->y - vec.y, this->z - vec.z);
}

template <class type>
Vec3<type> Vec3<type>::operator+= (const Vec3 &vec)const
{
	return (this->x + vec.x, this->y + vec.y, this->z + vec.z);
}

template <class type>
Vec3<type> Vec3<type>::operator-= (const Vec3 &vec)const
{
	return (this->x - vec.x, this->y - vec.y, this->z - vec.z);
}

template <class type>
bool Vec3<type>::operator= (const Vec3 &vec)const
{
	return (this->x = vec.x, this->y = vec.y, this->z = vec.z);
}

template <class type>
bool Vec3<type>::operator== (const Vec3 &vec)const
{
	return (this->x == vec.x, this->y == vec.y, this->z == vec.z);
}

template <class type>
void Vec3<type>::normalize()const
{
	type module = (sqrt(x*x + y * y + z * z));
	return Vec3<type>(x / module, y / module, z / module);
}

template <class type>
void Vec3<type>::zero()const
{
	return Vec3<type>(this->x = 0, this->y = 0, this->z = 0)
}

template <class type>
bool Vec3<type>::is_zero()const
{
	return Vec3<type>(this->x = 0, this->y = 0, this->z = 0)
}

#endif