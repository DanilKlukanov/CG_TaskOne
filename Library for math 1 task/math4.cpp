#include "pch.h"
#include "math4.h"

math4::math4() {
	for (int i = 0; i < 4; i++) {
		matrix.push_back(std::vector<float>(4));
	}
}

math4::math4(float number) {
	matrix.resize(4);
	for (int i = 0; i < 4; i++) {
		matrix[i].resize(4);
	}

	matrix[0][0] = number;
	matrix[0][1] = 0;
	matrix[0][2] = 0;
	matrix[0][3] = 0;

	matrix[1][0] = 0;
	matrix[1][1] = number;
	matrix[1][2] = 0;
	matrix[1][3] = 0;

	matrix[2][0] = 0;
	matrix[2][1] = 0;
	matrix[2][2] = number;
	matrix[2][3] = 0;

	matrix[3][0] = 0;
	matrix[3][1] = 0;
	matrix[3][2] = 0;
	matrix[3][3] = number;
}

math4::math4(float a, float b, float c, float d,
			 float e, float f, float g, float h,
			 float i, float j, float k, float l,
			 float m, float n, float o, float r) 
{
	matrix.resize(4);
	for (int i = 0; i < 4; i++) {
		matrix[i].resize(4);
	}

	matrix[0][0] = a;
	matrix[0][1] = e;
	matrix[0][2] = i;
	matrix[0][3] = m;

	matrix[1][0] = b;
	matrix[1][1] = f;
	matrix[1][2] = j;
	matrix[1][3] = n;

	matrix[2][0] = c;
	matrix[2][1] = g;
	matrix[2][2] = k;
	matrix[2][3] = o;

	matrix[3][0] = d;
	matrix[3][1] = h;
	matrix[3][2] = l;
	matrix[3][3] = r;
}

math4::math4(const vec4& first, const vec4& second, const vec4& third, const vec4& four) {
	matrix.resize(4);
	for (int i = 0; i < 4; i++) {
		matrix[i].resize(4);
	}

	matrix[0][0] = first.x;
	matrix[0][1] = second.x;
	matrix[0][2] = third.x;
	matrix[0][3] = four.x;

	matrix[1][0] = first.y;
	matrix[1][1] = second.y;
	matrix[1][2] = third.y;
	matrix[1][3] = four.y;

	matrix[2][0] = first.z;
	matrix[2][1] = second.z;
	matrix[2][2] = third.z;
	matrix[2][3] = four.z;

	matrix[3][0] = first.w;
	matrix[3][1] = second.w;
	matrix[3][2] = third.w;
	matrix[3][3] = four.w;
}

math4::math4(const math4& other) {
	matrix = other.matrix;
}

math4 math4::operator+(const math4& other) const {
	math4 res;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			res.matrix[i][j] = matrix[j][i] + other.matrix[j][i];
		}
	}
	return res;
}

math4& math4::operator+=(const math4& other) {
	*this = *this + other;
	return *this;
}

math4 math4::operator-(const math4& other) const {
	math4 res;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			res.matrix[i][j] = matrix[j][i] - other.matrix[j][i];
		}
	}
	return res;
}

math4& math4::operator-=(const math4& other) {
	*this = *this - other;
	return *this;
}

math4 math4::operator*(const math4& other) const {
	math4 res;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			res.matrix[j][i] = 0;
			for (int k = 0; k < 4; k++) {
				res.matrix[j][i] += matrix[i][k] * other.matrix[k][j];
			}
		}
	}
	return res;
}

math4& math4::operator*=(const math4& other) {
	*this = *this * other;
	return *this;
}

math4 math4::operator*(float number) const {
	math4 res;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			res.matrix[i][j] = matrix[j][i] * number;
		}
	}
	return res;
}

math4& math4::operator*=(float number) {
	*this = *this * number;
	return *this;
}

math4 math4::operator/(float number) const {
	math4 res;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			res.matrix[i][j] = matrix[j][i] / number;
		}
	}
	return res;
}

math4& math4::operator/=(float number) {
	*this = *this / number;
	return *this;
}

math4 math4::operator+(float number) const {
	math4 res;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			res.matrix[i][j] = matrix[j][i] + number;
		}
	}
	return res;
}

math4& math4::operator+=(float number) {
	*this = *this + number;
	return *this;
}

math4 math4::operator-(float number) const {
	math4 res;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			res.matrix[i][j] = matrix[j][i] - number;
		}
	}
	return res;
}

math4& math4::operator-=(float number) {
	*this = *this - number;
	return *this;
}

vec4 math4::operator*(const vec4& vec) const {
	vec4 res;
	res.x = matrix[0][0] * vec.x + matrix[0][1] * vec.y + matrix[0][2] * vec.z + matrix[0][3] * vec.w;
	res.y = matrix[1][0] * vec.x + matrix[1][1] * vec.y + matrix[1][2] * vec.z + matrix[1][3] * vec.w;
	res.z = matrix[2][0] * vec.x + matrix[2][1] * vec.y + matrix[2][2] * vec.z + matrix[2][3] * vec.w;
	res.w = matrix[2][0] * vec.x + matrix[2][1] * vec.y + matrix[2][2] * vec.z + matrix[3][3] * vec.w;
	return res;
}

math4 math4::IdentityMatrix() {
	return math4(1.0f);
}

math4 math4::ReverseMatrix() {

}

math4 math4::TransposedMatrix() {
	return math4(GetColumn(0), GetColumn(1), GetColumn(2), GetColumn(3));
}

math4 math4::Translate(const math4& other) {

}

math4 math4::Rotate(const math4& other) {

}

math4 math4::Scale(const math4& other) {

}

vec4 math4::GetRow(int ind) {
	if (ind >= 0 && ind < 4) {
		return vec4(matrix[ind][0], matrix[ind][1], matrix[ind][2], matrix[ind][3]);
	}
}

vec4 math4::GetColumn(int ind) {
	if (ind >= 0 && ind < 4) {
		std::vector<float> res(4);
		for (int i = 0; i < 4; i++) {
			res[i] = matrix[i][ind];
		}
		return vec4(res[0], res[1], res[2], res[3]);
	}
}

const bool math4::operator==(const math4& other) {
	return (matrix == other.matrix);
}

const bool math4::operator!=(const math4& other) {
	return !(matrix == other.matrix);
}
