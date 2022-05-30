#include "calculator.h"
int triangle_type;

// 0 Equilateral Triangle
// 1 Isosceles Triangle
// 2 Scalene Triangle

float circle_calculate_perimeter(float radius) {
	float perimeter = 2 * MY_PI * radius;
	return perimeter;
}

float circle_calculate_field(float radius) {
	float field = MY_PI * (sqrt(radius));
	return field;
}


float rectangle_calculate_perimeter(float side_a, float side_b) {
	return (side_a * 2) + (side_b * 2);
}

float rectangle_calculate_field(float side_a, float side_b) {
	return side_a * side_b;
}


float trapeze_calculate_perimeter(float side_a, float side_b, float side_c, float side_d) {
	return side_a + side_b + side_c + side_d;
}

float trapeze_calculate_field(float side_a, float side_b, float side_c, float side_d) {

	
	float height;
	float area;
	float a = side_a - side_b;
	a = fabs(a);
	float b;
	float c;
	float d;
	//power up sides
	a = pow(a, 2);
	b = pow(side_c, 2);
	c = pow(side_d, 2);
	d = pow((a + b - c), 2);

	area = sqrt((4 * a * b) - d) / 4;
	a = sqrt(a, 2);
	height = (area / a) * 2;
	area = 0.5 * (side_a + side_b) * height;
	return area;

}


float triangle_calculate_perimeter(float side_a, float side_b, float side_c) {
	return side_a + side_b + side_c;
}

float triangle_calculate_field(float side_a, float side_b, float side_c) {
	float semi_p = (side_a + side_b + side_c) / 2;
	return sqrt(semi_p * (semi_p - side_a) * (semi_p - side_b) * (semi_p * side_c));
}

int triangle_specificator(float side_a, float side_b, float side_c) {

}