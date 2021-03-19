#include "pch.h"
#include "vec2.h"
#include "vec3.h"
#include "vec4.h"
#include "math2.h"
#include "math3.h"
#include "math4.h"

#include "glm/vec2.hpp"
#include "glm/vec3.hpp"
#include "glm/vec4.hpp"
#include "glm/geometric.hpp"
#include "glm/mat2x2.hpp"
#include "glm/mat3x3.hpp"
#include "glm/mat4x4.hpp"
#include "glm/gtc/matrix_transform.hpp"
#include "glm/gtc/matrix_access.hpp"
#include <iostream>

TEST(Vec2, Add) {
	glm::vec2 vectorOne = glm::vec2(4, 5);
	glm::vec2 vectorTwo = glm::vec2(17, 8);
	glm::vec2 result = vectorOne + vectorTwo;

	vec2 vecOne(4, 5);
	vec2 vecTwo(17, 8);
	vec2 res(vecOne + vecTwo);

	EXPECT_EQ(result.x, res.x);
	EXPECT_EQ(result.y, res.y);
	EXPECT_EQ(result.x, 21);
	EXPECT_EQ(result.y, 13);
}

TEST(Vec2, Sub) {
	glm::vec2 vectorOne = glm::vec2(12, 1);
	glm::vec2 vectorTwo = glm::vec2(8, 5);
	glm::vec2 result = vectorOne - vectorTwo;

	vec2 vecOne(12, 1);
	vec2 vecTwo(8, 5);
	vec2 res(vecOne - vecTwo);

	EXPECT_EQ(result.x, res.x);
	EXPECT_EQ(result.y, res.y);
	EXPECT_EQ(result.x, 4);
	EXPECT_EQ(result.y, -4);
}

TEST(Vec2, ScalarMul) {
	glm::vec2 vectorOne = glm::vec2(12, 1);
	glm::vec2 vectorTwo = glm::vec2(8, 5);
	float result = glm::dot(vectorOne, vectorTwo);

	vec2 vecOne(12, 1);
	vec2 vecTwo(8, 5);
	float res = vecOne.ScalarMultiplication(vecTwo);

	EXPECT_EQ(result, res);
}


TEST(Vec2, MulNum) {
	glm::vec2 vectorOne = glm::vec2(12, 1);
	glm::vec2 result = vectorOne * 6.0f;

	vec2 vecOne(12, 1);
	vec2 res(vecOne * 6.0f);

	EXPECT_EQ(result.x, res.x);
	EXPECT_EQ(result.y, res.y);
	EXPECT_EQ(result.x, 72);
	EXPECT_EQ(result.y, 6);
}

TEST(Vec2, DivNum) {
	glm::vec2 vectorOne = glm::vec2(144, 12);
	glm::vec2 result = vectorOne / 12.0f;

	vec2 vecOne(144, 12);
	vec2 res(vecOne / 12.0f);

	EXPECT_EQ(result.x, res.x);
	EXPECT_EQ(result.y, res.y);
	EXPECT_EQ(result.x, 12);
	EXPECT_EQ(result.y, 1);
}

TEST(Vec2, Len) {
	glm::vec2 vectorOne = glm::vec2(6, 8);
	float result = glm::length(vectorOne);

	vec2 vecOne(6, 8);
	float res = vecOne.Lenght();

	EXPECT_EQ(result, res);
}

TEST(Vec2, Nor) {
	glm::vec2 vectorOne = glm::vec2(6.0f, 8.0f);
	glm::vec2 result = glm::normalize(vectorOne);

	vec2 vecOne(6.0f, 8.0f);
	vec2 res(vecOne.Normalize());

	EXPECT_EQ(result.x, res.x);
	EXPECT_EQ(result.y, res.y);
	EXPECT_EQ(result.x, 0.6f);
	EXPECT_EQ(result.y, 0.8f);
}


TEST(Vec2, Iqual) {
	glm::vec2 vectorOne = glm::vec2(144, 12);
	glm::vec2 vectorTwo = glm::vec2(144, 12);
	bool result = vectorOne == vectorTwo;

	vec2 vecOne(144, 12);
	vec2 vecTwo(144, 12);
	bool res = vecOne == vecTwo;

	EXPECT_EQ(result, res);
}

TEST(Vec2, NOIqual) {
	glm::vec2 vectorOne = glm::vec2(19, 70);
	glm::vec2 vectorTwo = glm::vec2(25, 70);
	bool result = vectorOne != vectorTwo;

	vec2 vecOne(19, 70);
	vec2 vecTwo(25, 70);
	bool res = vecOne != vecTwo;

	EXPECT_EQ(result, res);
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
TEST(Vec3, Add) {
	glm::vec3 vectorOne = glm::vec3(4, 5, 3);
	glm::vec3 vectorTwo = glm::vec3(17, 8, 6);
	glm::vec3 result = vectorOne + vectorTwo;

	vec3 vecOne(4, 5, 3);
	vec3 vecTwo(17, 8, 6);
	vec3 res(vecOne + vecTwo);

	EXPECT_EQ(result.x, res.x);
	EXPECT_EQ(result.y, res.y);
	EXPECT_EQ(result.z, res.z);
	EXPECT_EQ(result.x, 21);
	EXPECT_EQ(result.y, 13);
	EXPECT_EQ(result.z, 9);
}

TEST(Vec3, Sub) {
	glm::vec3 vectorOne = glm::vec3(12, 1, 7);
	glm::vec3 vectorTwo = glm::vec3(8, 5, 7);
	glm::vec3 result = vectorOne - vectorTwo;

	vec3 vecOne(12, 1, 7);
	vec3 vecTwo(8, 5, 7);
	vec3 res(vecOne - vecTwo);

	EXPECT_EQ(result.x, res.x);
	EXPECT_EQ(result.y, res.y);
	EXPECT_EQ(result.z, res.z);
	EXPECT_EQ(result.x, 4);
	EXPECT_EQ(result.y, -4);
	EXPECT_EQ(result.z, 0);
}

TEST(Vec3, ScalarMul) {
	glm::vec3 vectorOne = glm::vec3(12, 1, 20);
	glm::vec3 vectorTwo = glm::vec3(8, 5, -4);
	float result = glm::dot(vectorOne, vectorTwo);

	vec3 vecOne(12, 1, 20);
	vec3 vecTwo(8, 5, -4);
	float res = vecOne.ScalarMultiplication(vecTwo);

	EXPECT_EQ(result, res);
}


TEST(Vec3, MulNum) {
	glm::vec3 vectorOne = glm::vec3(12, 1, 8);
	glm::vec3 result = vectorOne * 6.0f;

	vec3 vecOne(12, 1, 8);
	vec3 res(vecOne * 6.0f);

	EXPECT_EQ(result.x, res.x);
	EXPECT_EQ(result.y, res.y);
	EXPECT_EQ(result.z, res.z);
	EXPECT_EQ(result.x, 72);
	EXPECT_EQ(result.y, 6);
	EXPECT_EQ(result.z, 48);
}

TEST(Vec3, DivNum) {
	glm::vec3 vectorOne = glm::vec3(144, 12, 1728);
	glm::vec3 result = vectorOne / 12.0f;

	vec3 vecOne(144, 12, 1728);
	vec3 res(vecOne / 12.0f);

	EXPECT_EQ(result.x, res.x);
	EXPECT_EQ(result.y, res.y);
	EXPECT_EQ(result.z, res.z);
	EXPECT_EQ(result.x, 12);
	EXPECT_EQ(result.y, 1);
	EXPECT_EQ(result.z, 144);
}


TEST(Vec3, VecMul) {
	glm::vec3 vectorOne = glm::vec3(144, 12, 1728);
	glm::vec3 vectorTwo = glm::vec3(134, 0, 798);
	glm::vec3 result = glm::cross(vectorOne, vectorTwo);

	vec3 vecOne(144, 12, 1728);
	vec3 vecTwo(134, 0, 798);
	vec3 res(vecOne.VectorMultiplication(vecTwo));

	EXPECT_EQ(result.x, res.x);
	EXPECT_EQ(result.y, res.y);
	EXPECT_EQ(result.z, res.z);
}


TEST(Vec3, Len) {
	glm::vec3 vectorOne = glm::vec3(3, 4, 5);
	float result = glm::length(vectorOne);

	vec3 vecOne(3, 4, 5);
	float res = vecOne.Lenght();

	EXPECT_EQ(result, res);
}

TEST(Vec3, Nor) {
	glm::vec3 vectorOne = glm::vec3(13.0f, 20.0f, 54.0f);
	glm::vec3 result = glm::normalize(vectorOne);

	vec3 vecOne(13.0f, 20.0f, 54.0f);
	vec3 res(vecOne.Normalize());

	EXPECT_EQ(result.x, res.x);
	EXPECT_EQ(result.y, res.y);
	EXPECT_EQ(result.z, res.z);
}


TEST(Vec3, Iqual) {
	glm::vec3 vectorOne = glm::vec3(144, 12, 78);
	glm::vec3 vectorTwo = glm::vec3(144, 12, 78);
	bool result = vectorOne == vectorTwo;

	vec3 vecOne(144, 12, 78);
	vec3 vecTwo(144, 12, 78);
	bool res = vecOne == vecTwo;

	EXPECT_EQ(result, res);
}

TEST(Vec3, NOIqual) {
	glm::vec3 vectorOne = glm::vec3(19, 70, 25);
	glm::vec3 vectorTwo = glm::vec3(25, 70, 19);
	bool result = vectorOne != vectorTwo;

	vec3 vecOne(19, 70, 25);
	vec3 vecTwo(25, 70, 19);
	bool res = vecOne != vecTwo;

	EXPECT_EQ(result, res);
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

TEST(Vec4, Add) {
	glm::vec4 vectorOne = glm::vec4(4, 5, 3, 0);
	glm::vec4 vectorTwo = glm::vec4(17, 8, 6, 100);
	glm::vec4 result = vectorOne + vectorTwo;

	vec4 vecOne(4, 5, 3, 0);
	vec4 vecTwo(17, 8, 6, 100);
	vec4 res(vecOne + vecTwo);

	EXPECT_EQ(result.x, res.x);
	EXPECT_EQ(result.y, res.y);
	EXPECT_EQ(result.z, res.z);
	EXPECT_EQ(result.w, res.w);
	EXPECT_EQ(result.x, 21);
	EXPECT_EQ(result.y, 13);
	EXPECT_EQ(result.z, 9);
	EXPECT_EQ(result.w, 100);
}

TEST(Vec4, Sub) {
	glm::vec4 vectorOne = glm::vec4(12, 1, 7, 50);
	glm::vec4 vectorTwo = glm::vec4(8, 5, 7, 1);
	glm::vec4 result = vectorOne - vectorTwo;

	vec4 vecOne(12, 1, 7, 50);
	vec4 vecTwo(8, 5, 7, 1);
	vec4 res(vecOne - vecTwo);

	EXPECT_EQ(result.x, res.x);
	EXPECT_EQ(result.y, res.y);
	EXPECT_EQ(result.z, res.z);
	EXPECT_EQ(result.w, res.w);
	EXPECT_EQ(result.x, 4);
	EXPECT_EQ(result.y, -4);
	EXPECT_EQ(result.z, 0);
	EXPECT_EQ(result.w, 49);
}

TEST(Vec4, ScalarMul) {
	glm::vec4 vectorOne = glm::vec4(7, 8, 9, 10);
	glm::vec4 vectorTwo = glm::vec4(11, 12, 13, 14);
	float result = glm::dot(vectorOne, vectorTwo);

	vec4 vecOne(7, 8, 9, 10);
	vec4 vecTwo(11, 12, 13, 14);
	float res = vecOne.ScalarMultiplication(vecTwo);

	EXPECT_EQ(result, res);
}

TEST(Vec4, MulNum) {
	glm::vec4 vectorOne = glm::vec4(12, 1, 8, 5);
	glm::vec4 result = vectorOne * 6.0f;

	vec4 vecOne(12, 1, 8, 5);
	vec4 res(vecOne * 6.0f);

	EXPECT_EQ(result.x, res.x);
	EXPECT_EQ(result.y, res.y);
	EXPECT_EQ(result.z, res.z);
	EXPECT_EQ(result.w, res.w);
	EXPECT_EQ(result.x, 72);
	EXPECT_EQ(result.y, 6);
	EXPECT_EQ(result.z, 48);
	EXPECT_EQ(result.w, 30);
}

TEST(Vec4, DivNum) {
	glm::vec4 vectorOne = glm::vec4(144, 12, 1728, 0);
	glm::vec4 result = vectorOne / 12.0f;

	vec4 vecOne(144, 12, 1728, 0);
	vec4 res(vecOne / 12.0f);

	EXPECT_EQ(result.x, res.x);
	EXPECT_EQ(result.y, res.y);
	EXPECT_EQ(result.z, res.z);
	EXPECT_EQ(result.w, res.w);
	EXPECT_EQ(result.x, 12);
	EXPECT_EQ(result.y, 1);
	EXPECT_EQ(result.z, 144);
	EXPECT_EQ(result.w, 0);
}


TEST(Vec4, Len) {
	glm::vec4 vectorOne = glm::vec4(1, 1, 1, 1);
	float result = glm::length(vectorOne);

	vec4 vecOne(1, 1, 1, 1);
	float res = vecOne.Lenght();

	EXPECT_EQ(result, res);
}

TEST(Vec4, Nor) {
	glm::vec4 vectorOne = glm::vec4(15, 0, 75, 687);
	glm::vec4 result = glm::normalize(vectorOne);

	vec4 vecOne(15, 0, 75, 687);
	vec4 res(vecOne.Normalize());

	EXPECT_EQ(result.x, res.x);
	EXPECT_EQ(result.y, res.y);
	EXPECT_EQ(result.z, res.z);
	EXPECT_EQ(result.w, res.w);
}

TEST(Vec4, Iqual) {
	glm::vec4 vectorOne = glm::vec4(144, 12, 78, -10);
	glm::vec4 vectorTwo = glm::vec4(144, 12, 78, -10);
	bool result = vectorOne == vectorTwo;

	vec4 vecOne(144, 12, 78, -10);
	vec4 vecTwo(144, 12, 78, -10);
	bool res = vecOne == vecTwo;

	EXPECT_EQ(result, res);
}

TEST(Vec4, NOIqual) {
	glm::vec4 vectorOne = glm::vec4(19, 70, 25, -6);
	glm::vec4 vectorTwo = glm::vec4(25, 70, 19, -100);
	bool result = vectorOne != vectorTwo;

	vec4 vecOne(19, 70, 25, -6);
	vec4 vecTwo(25, 70, 19, -100);
	bool res = vecOne != vecTwo;

	EXPECT_EQ(result, res);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

TEST(Math2, Add) {
	glm::mat2 vectorOne = glm::mat2(1, 2, 3, 4);
	glm::mat2 vectorTwo = glm::mat2(5, 6, 7, 8);
	glm::mat2 result = vectorOne + vectorTwo;

	math2 matOne(1, 2, 3, 4);
	math2 matTwo(5, 6, 7, 8);
	math2 res(matOne + matTwo);

	EXPECT_EQ(result[0][0], res.matrix[0][0]);
	EXPECT_EQ(result[0][1], res.matrix[0][1]);
	EXPECT_EQ(result[1][0], res.matrix[1][0]);
	EXPECT_EQ(result[1][1], res.matrix[1][1]);
}

TEST(Math2, Sub) {
	glm::mat2 vectorOne = glm::mat2(1, 2, 3, 4);
	glm::mat2 vectorTwo = glm::mat2(5, 6, 7, 8);
	glm::mat2 result = vectorOne - vectorTwo;

	math2 matOne(1, 2, 3, 4);
	math2 matTwo(5, 6, 7, 8);
	math2 res(matOne - matTwo);

	EXPECT_EQ(result[0][0], res.matrix[0][0]);
	EXPECT_EQ(result[0][1], res.matrix[0][1]);
	EXPECT_EQ(result[1][0], res.matrix[1][0]);
	EXPECT_EQ(result[1][1], res.matrix[1][1]);
}

TEST(Math2, Mul) {
	glm::mat2 vectorOne = glm::mat2(1, 2, 3, 4);
	glm::mat2 vectorTwo = glm::mat2(5, 6, 7, 8);
	glm::mat2 result = vectorOne * vectorTwo;

	math2 matOne(1, 2, 3, 4);
	math2 matTwo(5, 6, 7, 8);
	math2 res(matOne * matTwo);

	EXPECT_EQ(result[0][0], res.matrix[0][0]);
	EXPECT_EQ(result[0][1], res.matrix[0][1]);
	EXPECT_EQ(result[1][0], res.matrix[1][0]);
	EXPECT_EQ(result[1][1], res.matrix[1][1]);
}

TEST(Math2, MulNum) {
	glm::mat2 vectorOne = glm::mat2(1, 2, 3, 4);
	glm::mat2 result = vectorOne * 15.0f;

	math2 matOne(1, 2, 3, 4);
	math2 res(matOne * 15.0f);

	EXPECT_EQ(result[0][0], res.matrix[0][0]);
	EXPECT_EQ(result[0][1], res.matrix[0][1]);
	EXPECT_EQ(result[1][0], res.matrix[1][0]);
	EXPECT_EQ(result[1][1], res.matrix[1][1]);
}

TEST(Math2, DivNum) {
	glm::mat2 vectorOne = glm::mat2(1, 2, 3, 4);
	glm::mat2 result = vectorOne / 15.0f;

	math2 matOne(1, 2, 3, 4);
	math2 res(matOne / 15.0f);

	EXPECT_EQ(result[0][0], res.matrix[0][0]);
	EXPECT_EQ(result[0][1], res.matrix[0][1]);
	EXPECT_EQ(result[1][0], res.matrix[1][0]);
	EXPECT_EQ(result[1][1], res.matrix[1][1]);
}

TEST(Math2, AddNum) {
	glm::mat2 vectorOne = glm::mat2(1, 2, 3, 4);
	glm::mat2 result = vectorOne + 15.0f;

	math2 matOne(1, 2, 3, 4);
	math2 res(matOne + 15.0f);

	EXPECT_EQ(result[0][0], res.matrix[0][0]);
	EXPECT_EQ(result[0][1], res.matrix[0][1]);
	EXPECT_EQ(result[1][0], res.matrix[1][0]);
	EXPECT_EQ(result[1][1], res.matrix[1][1]);
}

TEST(Math2, SubNum) {
	glm::mat2 vectorOne = glm::mat2(1, 2, 3, 4);
	glm::mat2 result = vectorOne - 15.0f;

	math2 matOne(1, 2, 3, 4);
	math2 res(matOne - 15.0f);

	EXPECT_EQ(result[0][0], res.matrix[0][0]);
	EXPECT_EQ(result[0][1], res.matrix[0][1]);
	EXPECT_EQ(result[1][0], res.matrix[1][0]);
	EXPECT_EQ(result[1][1], res.matrix[1][1]);
}

TEST(Math2, MulVec) {
	glm::mat2 vectorOne = glm::mat2(1, 2, 3, 4);
	glm::vec2 vectorTwo = glm::vec2(5, 8);
	glm::vec2 result = vectorOne * vectorTwo;

	math2 matOne(1, 2, 3, 4);
	vec2 vecOne(5, 8);
	vec2 res(matOne * vecOne);

	EXPECT_EQ(result.x, res.x);
	EXPECT_EQ(result.y, res.y);
}

TEST(Math2, TransMatrix) {
	glm::mat2 MathOne = glm::mat2(1, 2, 3, 4);
	glm::mat2 result = glm::transpose(MathOne);

	math2 MatOne(1, 2, 3, 4);
	math2 res = MatOne.TransposedMatrix();

	EXPECT_EQ(result[0][0], res.matrix[0][0]);
	EXPECT_EQ(result[0][1], res.matrix[0][1]);
	EXPECT_EQ(result[1][0], res.matrix[1][0]);
	EXPECT_EQ(result[1][1], res.matrix[1][1]);
}

TEST(Math2, InverseMatrix) {
	glm::mat2 MathOne = glm::mat2(1, 2, 3, 4);
	glm::mat2 result = glm::inverse(MathOne);

	math2 MatOne(1, 2, 3, 4);
	math2 res = MatOne.ReverseMatrix();

	EXPECT_EQ(result[0][0], res.matrix[0][0]);
	EXPECT_EQ(result[0][1], res.matrix[0][1]);
	EXPECT_EQ(result[1][0], res.matrix[1][0]);
	EXPECT_EQ(result[1][1], res.matrix[1][1]);
}

TEST(Math2, GetRow) {
	glm::mat2 MathOne = glm::mat2(144, 12, 78, -10);
	glm::vec2 GetRow = glm::vec2(glm::row(MathOne, 0));
	
	math2 Math2One(144, 12, 78, -10);
	vec2 GetRow2(Math2One.GetRow(0));

	EXPECT_EQ(GetRow.x, GetRow2.x);
	EXPECT_EQ(GetRow.y, GetRow2.y);
}

TEST(Math2, GetColumn) {
	glm::mat2 MathOne = glm::mat2(36, 26, 100, -2);
	glm::vec2 GetCol = glm::vec2(glm::column(MathOne, 0));

	math2 Math2One(36, 26, 100, -2);
	vec2 GetCol2(Math2One.GetColumn(0));

	EXPECT_EQ(GetCol.x, GetCol2.x);
	EXPECT_EQ(GetCol.y, GetCol2.y);
}

TEST(Math2, Iqual) {
	glm::mat2 MathOne = glm::mat2(144, 12, 78, -10);
	glm::mat2 MathTwo = glm::mat2(144, 12, 78, -10);
	bool result = MathOne == MathTwo;

	math2 Math2One(144, 12, 78, -10);
	math2 Math2Two(144, 12, 78, -10);
	bool res = Math2One == Math2Two;

	EXPECT_EQ(result, res);
}

TEST(Math2, NOIqual) {
	glm::mat2 MathOne = glm::mat2(19, 70, 25, -6);
	glm::mat2 MathTwo = glm::mat2(25, 70, 19, -100);
	bool result = MathOne != MathTwo;

	math2 Math2One(19, 70, 25, -6);
	math2 Math2Two(25, 70, 19, -100);
	bool res = Math2One != Math2Two;

	EXPECT_EQ(result, res);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

TEST(Math3, Add) {
	glm::mat3 MathOne = glm::mat3(1, 2, 3, 4, 5, 6, 7, 8, 9);
	glm::mat3 MAthTwo = glm::mat3(1, 2, 3, 4, 5, 6, 7, 8, 9);
	glm::mat3 result = MathOne + MAthTwo;

	math3 matOne(1, 2, 3, 4, 5, 6, 7, 8, 9);
	math3 matTwo(1, 2, 3, 4, 5, 6, 7, 8, 9);
	math3 res(matOne + matTwo);

	EXPECT_EQ(result[0][0], res.matrix[0][0]);
	EXPECT_EQ(result[0][1], res.matrix[0][1]);
	EXPECT_EQ(result[0][2], res.matrix[0][2]);
	
	EXPECT_EQ(result[1][0], res.matrix[1][0]);
	EXPECT_EQ(result[1][1], res.matrix[1][1]);
	EXPECT_EQ(result[1][2], res.matrix[1][2]);

	EXPECT_EQ(result[2][0], res.matrix[2][0]);
	EXPECT_EQ(result[2][1], res.matrix[2][1]);
	EXPECT_EQ(result[2][2], res.matrix[2][2]);
}

TEST(Math3, Sub) {
	glm::mat3 MathOne = glm::mat3(1, 2, 3, 4, 5, 6, 7, 8, 9);
	glm::mat3 MAthTwo = glm::mat3(9, 8, 7, 6, 5, 4, 3, 2, 1);
	glm::mat3 result = MathOne - MAthTwo;

	math3 matOne(1, 2, 3, 4, 5, 6, 7, 8, 9);
	math3 matTwo(9, 8, 7, 6, 5, 4, 3, 2, 1);
	math3 res(matOne - matTwo);

	EXPECT_EQ(result[0][0], res.matrix[0][0]);
	EXPECT_EQ(result[0][1], res.matrix[0][1]);
	EXPECT_EQ(result[0][2], res.matrix[0][2]);

	EXPECT_EQ(result[1][0], res.matrix[1][0]);
	EXPECT_EQ(result[1][1], res.matrix[1][1]);
	EXPECT_EQ(result[1][2], res.matrix[1][2]);

	EXPECT_EQ(result[2][0], res.matrix[2][0]);
	EXPECT_EQ(result[2][1], res.matrix[2][1]);
	EXPECT_EQ(result[2][2], res.matrix[2][2]);
}

TEST(Math3, Mul) {
	glm::mat3 MathOne = glm::mat3(1, 2, 3, 4, 5, 6, 7, 8, 9);
	glm::mat3 MAthTwo = glm::mat3(9, 8, 7, 6, 5, 4, 3, 2, 1);
	glm::mat3 result = MathOne * MAthTwo;

	math3 matOne(1, 2, 3, 4, 5, 6, 7, 8, 9);
	math3 matTwo(9, 8, 7, 6, 5, 4, 3, 2, 1);
	math3 res(matOne * matTwo);

	EXPECT_EQ(result[0][0], res.matrix[0][0]);
	EXPECT_EQ(result[0][1], res.matrix[0][1]);
	EXPECT_EQ(result[0][2], res.matrix[0][2]);

	EXPECT_EQ(result[1][0], res.matrix[1][0]);
	EXPECT_EQ(result[1][1], res.matrix[1][1]);
	EXPECT_EQ(result[1][2], res.matrix[1][2]);

	EXPECT_EQ(result[2][0], res.matrix[2][0]);
	EXPECT_EQ(result[2][1], res.matrix[2][1]);
	EXPECT_EQ(result[2][2], res.matrix[2][2]);
}

TEST(Math3, MulNum) {
	glm::mat3 MathOne = glm::mat3(1, 2, 3, 4, 5, 6, 7, 8, 9);
	glm::mat3 result = MathOne * 17.0f;

	math3 matOne(1, 2, 3, 4, 5, 6, 7, 8, 9);
	math3 res(matOne * 17.0f);

	EXPECT_EQ(result[0][0], res.matrix[0][0]);
	EXPECT_EQ(result[0][1], res.matrix[0][1]);
	EXPECT_EQ(result[0][2], res.matrix[0][2]);

	EXPECT_EQ(result[1][0], res.matrix[1][0]);
	EXPECT_EQ(result[1][1], res.matrix[1][1]);
	EXPECT_EQ(result[1][2], res.matrix[1][2]);

	EXPECT_EQ(result[2][0], res.matrix[2][0]);
	EXPECT_EQ(result[2][1], res.matrix[2][1]);
	EXPECT_EQ(result[2][2], res.matrix[2][2]);
}

TEST(Math3, DivNum) {
	glm::mat3 MathOne = glm::mat3(1, 2, 3, 4, 5, 6, 7, 8, 9);
	glm::mat3 result = MathOne / 89.0f;

	math3 matOne(1, 2, 3, 4, 5, 6, 7, 8, 9);
	math3 res(matOne / 89.0f);

	EXPECT_EQ(result[0][0], res.matrix[0][0]);
	EXPECT_EQ(result[0][1], res.matrix[0][1]);
	EXPECT_EQ(result[0][2], res.matrix[0][2]);

	EXPECT_EQ(result[1][0], res.matrix[1][0]);
	EXPECT_EQ(result[1][1], res.matrix[1][1]);
	EXPECT_EQ(result[1][2], res.matrix[1][2]);

	EXPECT_EQ(result[2][0], res.matrix[2][0]);
	EXPECT_EQ(result[2][1], res.matrix[2][1]);
	EXPECT_EQ(result[2][2], res.matrix[2][2]);
}

TEST(Math3, SubNum) {
	glm::mat3 MathOne = glm::mat3(1, 2, 3, 4, 5, 6, 7, 8, 9);
	glm::mat3 result = MathOne - 100.0f;

	math3 matOne(1, 2, 3, 4, 5, 6, 7, 8, 9);
	math3 res(matOne - 100.0f);

	EXPECT_EQ(result[0][0], res.matrix[0][0]);
	EXPECT_EQ(result[0][1], res.matrix[0][1]);
	EXPECT_EQ(result[0][2], res.matrix[0][2]);

	EXPECT_EQ(result[1][0], res.matrix[1][0]);
	EXPECT_EQ(result[1][1], res.matrix[1][1]);
	EXPECT_EQ(result[1][2], res.matrix[1][2]);

	EXPECT_EQ(result[2][0], res.matrix[2][0]);
	EXPECT_EQ(result[2][1], res.matrix[2][1]);
	EXPECT_EQ(result[2][2], res.matrix[2][2]);
}

TEST(Math3, AddNum) {
	glm::mat3 MathOne = glm::mat3(1, 2, 3, 4, 5, 6, 7, 8, 9);
	glm::mat3 result = MathOne + 27.0f;

	math3 matOne(1, 2, 3, 4, 5, 6, 7, 8, 9);
	math3 res(matOne + 27.0f);

	EXPECT_EQ(result[0][0], res.matrix[0][0]);
	EXPECT_EQ(result[0][1], res.matrix[0][1]);
	EXPECT_EQ(result[0][2], res.matrix[0][2]);

	EXPECT_EQ(result[1][0], res.matrix[1][0]);
	EXPECT_EQ(result[1][1], res.matrix[1][1]);
	EXPECT_EQ(result[1][2], res.matrix[1][2]);

	EXPECT_EQ(result[2][0], res.matrix[2][0]);
	EXPECT_EQ(result[2][1], res.matrix[2][1]);
	EXPECT_EQ(result[2][2], res.matrix[2][2]);
}

TEST(Math3, MulVec) {
	glm::mat3 MatOne = glm::mat3(1, 2, 3, 4, 5, 6, 7, 8, 9);
	glm::vec3 vectorTwo = glm::vec3(10, 11, 12);
	glm::vec3 result = MatOne * vectorTwo;

	math3 matOne(1, 2, 3, 4, 5, 6, 7, 8, 9);
	vec3 vecOne(10, 11, 12);
	vec3 res(matOne * vecOne);

	EXPECT_EQ(result.x, res.x);
	EXPECT_EQ(result.y, res.y);
	EXPECT_EQ(result.z, res.z);
}

TEST(Math3, InverseMatrix) {
	glm::mat3 MathOne = glm::mat3(1, 2, 3, 4, 5, 6, 7, 8, 9);
	glm::mat3 result = glm::inverse(MathOne);

	math3 MatOne(1, 2, 3, 4, 5, 6, 7, 8, 9);
	math3 res = MatOne.ReverseMatrix();

	EXPECT_EQ(result[0][0], res.matrix[0][0]);
	EXPECT_EQ(result[0][1], res.matrix[0][1]);
	EXPECT_EQ(result[0][2], res.matrix[0][2]);

	EXPECT_EQ(result[1][0], res.matrix[1][0]);
	EXPECT_EQ(result[1][1], res.matrix[1][1]);
	EXPECT_EQ(result[1][2], res.matrix[1][2]);

	EXPECT_EQ(result[2][0], res.matrix[2][0]);
	EXPECT_EQ(result[2][1], res.matrix[2][1]);
	EXPECT_EQ(result[2][2], res.matrix[2][2]);
}

TEST(Math3, TransMatrix) {
	glm::mat3 MathOne = glm::mat3(1, 2, 3, 4, 5, 6, 7, 8, 9);
	glm::mat3 result = glm::transpose(MathOne);

	math3 MatOne(1, 2, 3, 4, 5, 6, 7, 8, 9);
	math3 res = MatOne.TransposedMatrix();

	EXPECT_EQ(result[0][0], res.matrix[0][0]);
	EXPECT_EQ(result[0][1], res.matrix[0][1]);
	EXPECT_EQ(result[0][2], res.matrix[0][2]);

	EXPECT_EQ(result[1][0], res.matrix[1][0]);
	EXPECT_EQ(result[1][1], res.matrix[1][1]);
	EXPECT_EQ(result[1][2], res.matrix[1][2]);

	EXPECT_EQ(result[2][0], res.matrix[2][0]);
	EXPECT_EQ(result[2][1], res.matrix[2][1]);
	EXPECT_EQ(result[2][2], res.matrix[2][2]);
}

TEST(Math3, GetRow) {
	glm::mat3 MathOne = glm::mat3(144, 12, 78, -10, 23, 0, 8, 100, 89);
	glm::vec3 GetRow = glm::vec3(glm::row(MathOne, 2));

	math3 Math2One(144, 12, 78, -10, 23, 0, 8, 100, 89);
	vec3 GetRow2(Math2One.GetRow(2));

	EXPECT_EQ(GetRow.x, GetRow2.x);
	EXPECT_EQ(GetRow.y, GetRow2.y);
	EXPECT_EQ(GetRow.z, GetRow2.z);
}

TEST(Math3, GetColumn) {
	glm::mat3 MathOne = glm::mat3(36, 26, 100, -2, 1, 1, 30, 20, 18);
	glm::vec3 GetCol = glm::vec3(glm::column(MathOne, 1));

	math3 Math2One(36, 26, 100, -2, 1, 1, 30, 20, 18);
	vec3 GetCol2(Math2One.GetColumn(1));

	EXPECT_EQ(GetCol.x, GetCol2.x);
	EXPECT_EQ(GetCol.y, GetCol2.y);
	EXPECT_EQ(GetCol.z, GetCol2.z);
}

TEST(Math3, Iqual) {
	glm::mat3 MathOne = glm::mat3(144, 12, 78, -10, 23, 0, 8, 100, 89);
	glm::mat3 MathTwo = glm::mat3(144, 12, 78, -10, 23, 0, 8, 100, 89);
	bool result = MathOne == MathTwo;

	math3 Math2One(144, 12, 78, -10, 23, 0, 8, 100, 89);
	math3 Math2Two(144, 12, 78, -10, 23, 0, 8, 100, 89);
	bool res = Math2One == Math2Two;

	EXPECT_EQ(result, res);
}

TEST(Math3, NOIqual) {
	glm::mat3 MathOne = glm::mat3(19, 70, 25, -6, 0, 0, 0, 0, 0);
	glm::mat3 MathTwo = glm::mat3(25, 70, 19, -100, 0, 0, 0, 0, 0);
	bool result = MathOne != MathTwo;

	math3 Math2One(19, 70, 25, -6, 0, 0, 0, 0, 0);
	math3 Math2Two(25, 70, 19, -100, 0, 0, 0, 0, 0);
	bool res = Math2One != Math2Two;

	EXPECT_EQ(result, res);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

