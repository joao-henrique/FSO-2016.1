#ifndef INPUT_H_INCLUDED
#define INPUT_H_INCLUDED
#include "triangles.h"

void get_cartesian_point(Cartesian_point* vertice);
Triangle* get_triangle();
void list_perimeter(double perimeter);
void list_area(double area);
void list_missing_triangle();
void list_side(int vertice, double side);

#endif
