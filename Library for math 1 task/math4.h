#pragma once
#include <cmath>
#include "vec4.h"
#include "vec3.h"
class math4
{
public:
	math4();
	math4(float);
	math4(float, float, float, float,
		  float, float, float, float,
		  float, float, float, float,
		  float, float, float, float);
	math4(const vec4&, const vec4&, const vec4&, const vec4&);
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
	vec4 operator*(const vec4&) const;
	math4 IdentityMatrix();
	math4 ReverseMatrix();
	math4 TransposedMatrix();
	math4 Translate(const vec3&);
	math4 Rotate(const math4&);
	math4 Scale(const vec3&);
	vec4 GetRow(int);
	vec4 GetColumn(int);
	const bool operator==(const math4&);
	const bool operator!=(const math4&);

	std::vector<std::vector<float>> matrix;
};

