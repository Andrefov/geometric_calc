#include <stdio.h>
#include <math.h>
#define MY_PI 3.14159265358979323846

float circle_calculate_perimeter(float radius);
float circle_calculate_field(float radius);

float rectangle_calculate_perimeter(float side_a, float side_b);
float rectangle_calculate_field(float side_a, float side_b);

float triangle_calculate_perimeter(float side_a, float side_b, float side_c);
float triangle_calculate_field(float side_a, float side_b, float side_c);

float trapeze_calculate_perimeter(float side_a, float side_b, float side_c, float side_d);
float trapeze_calculate_field(float side_a, float side_b, float side_c, float side_d);

int triangle_specificator(float side_a, float side_b, float side_c);