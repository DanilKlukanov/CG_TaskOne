#pragma once
#include <cmath>
#include "vec4.h"
class math4
{
public:
	math4() = default;
	math4(float);
	math4(float, float, float, float,
		  float, float, float, float,
		  float, float, float, float,
		  float, float, float, float);
	math4(const math4&);
	math4 operator+(const math4&) const;
	math4& operator+=(const math4&);
	math4 operator-(const math4&) const;
	math4& operator-=(const math4&);
	math4 operator*(const math4&) const;
	math4& operator*=(const math4&);
	math4 operator*(float) const;
	math4& operator*=(float);
	math4 operator/(float) const;
	math4& operator/=(float);
	math4 operator+(float) const;
	math4& operator+=(float);
	math4 operator-(float) const;
	math4& operator-=(float);
	math4 operator*(const vec4&) const;
	math4& operator*=(const vec4&);
	math4& IdentityMatrix();
	math4& ReverseMatrix(const math4&);
	math4& TransposedMatrix(const math4&);
	math4& Translate(const math4&);
	math4& Rotate(const math4&);
	math4& Scale(const math4&);
	vec4& GetRow(int);
	vec4& GetColumn(int);
	const bool operator==(const math4&);
	const bool operator!=(const math4&);
};

