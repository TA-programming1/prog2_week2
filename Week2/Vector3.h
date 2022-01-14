#pragma once

struct Vector3
{
	//Vector3()
	//	:x{}, y{}, z{} {}

	float x{}, y{}, z{};

	Vector3 operator+ (const Vector3& other) const
	{
		Vector3 v;
		v.x = x + other.x;
		v.y = y + other.y;
		v.z = z + other.z;
		return v;
	}

	Vector3 operator- (const Vector3& other) const
	{
		Vector3 v;
		v.x = x - other.x;
		v.y = y - other.y;
		v.z = z - other.z;
		return v;
	}

	Vector3& operator+= (const Vector3& other)
	{
		x += other.x;
		y += other.y;
		z += other.z;
	}
};
//
//inline Vector3 Vector3::operator+(const Vector3& other) const
//{
//	Vector3 v;
//	v.x = x + other.x;
//	v.y = y + other.y;
//	v.z = z + other.z;
//	return v;
//}
