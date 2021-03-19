#pragma once
#include <cmath>
#include "vec3.h"

class math3
{
public:
	math3() = default;
	math3(float);
	math3(float, float, float,
		  float, float, float, 
		  float, float, float);
	math3(const math3&);
	math3 operator+(const math3&) const;
	math3& operator+=(const math3&);
	math3 operator-(const math3&) const;
	math3& operator-=(const math3&);
	math3 operator*(const math3&) const;
	math3& operator*=(const math3&);
	math3 operator*(float) const;
	math3& operator*=(float);
	math3 operator/(float) const;
	math3& operator/=(float);
	math3 operator+(float) const;
	math3& operator+=(float);
	math3 operator-(float) const;
	math3& operator-=(float);
	math3 operator*(const vec3&) const;
	math3& operator*=(const vec3&);
	math3& IdentityMatrix();
	math3& ReverseMatrix(const math3&);
	math3& TransposedMatrix(const math3&);
	math3& Translate(const math3&);
	math3& Rotate(const math3&);
	math3& Scale(const math3&);
	vec3& GetRow(int);
	vec3& GetColumn(int);
	const bool operator==(const math3&);
	const bool operator!=(const math3&);
};

