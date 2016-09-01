#ifndef CALCULATE_H_INCLUDED
#define CALCULATE_H_INCLUDED

void sides_triangle(Triangle *triangle);

void perimeter_triangle(Triangle *triangle);

double calc_area(Triangle *triangle);

double calc_determinant(Triangle *triangle);

double limit_size(Cartesian_point vector1, Cartesian_point vector2);

#endif
