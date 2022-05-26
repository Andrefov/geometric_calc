#include "calculator.h"

float circle_calculate_perimeter(float radius) {
	float perimeter = 2 * M_PI * radius;
	return perimeter;
}

float circle_calculate_field(float radius) {
	float field = M_PI * (sqrt(radius));
	return field;
}


float rectangle_calculate_perimeter(float side_a, float side_b) {
	return (side_a * 2) + (side_b * 2);
}

float rectangle_calculate_field(float side_a, float side_b) {
	return side_a * side_b;
}

float triangle_calculate_perimeter(float side_a, float side_b, float side_c) {
	return side_a + side_b + side_c;
}

float triangle_calculate_field(float side_a, float side_b, float side_c) {

}