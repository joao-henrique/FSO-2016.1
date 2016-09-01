#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "input.h"
#include "libcalcs.h"

void sides_triangle(Triangle *triangle){
  Cartesian_point vector1 = triangle->vector1;
  Cartesian_point vector2 = triangle->vector2;
  Cartesian_point vector3 = triangle->vector3;

  double side;
  side = limit_size(vector1, vector2);
  list_side(1, side);
  side = limit_size(vector2, vector3);
  list_side(2, side);
  side = limit_size(vector3, vector1);
  list_side(3, side);
}

double limit_size(Cartesian_point vector1, Cartesian_point vector2){
  int cathetus1 = pow((vector2.x - vector1.x),2);
  int cathetus2 = pow((vector2.y - vector1.y),2);
  double size = sqrt(cathetus1 + cathetus2);
  return size;
}

void perimeter_triangle(Triangle *triangle){
  Cartesian_point vector1 = triangle->vector1;
  Cartesian_point vector2 = triangle->vector2;
  Cartesian_point vector3 = triangle->vector3;

  double perimeter = 0.0;
  perimeter += limit_size(vector1, vector2);
  perimeter += limit_size(vector2, vector3);
  perimeter += limit_size(vector3, vector1);

  list_perimeter(perimeter);
}

double calc_determinant(Triangle *triangle){
  Cartesian_point vector1 = triangle->vector1;
  Cartesian_point vector2 = triangle->vector2;
  Cartesian_point vector3 = triangle->vector3;

  double line1 = (vector1.x * vector2.y * 1);
  double line2 = (vector1.y * 1 * vector3.x);
  double line3 = (1 * vector2.x * vector3.y);
  double cruze_line1 = (1 * vector2.y * vector3.x);
  double cruze_line2 = (vector1.x * vector3.y * 1);
  double cruze_line3 = (vector1.y * vector2.x * 1);

  double deteterminat = ((line1)+(line2)+(line3))-((cruze_line1)+(cruze_line2)+(cruze_line3));

  return abs(deteterminat/2);
}

double calc_area(Triangle *triangle){
double area = calc_determinant(triangle);

  if(area != 0){
   list_area(area);
  }
  else{
    list_missing_triangle();
  }

  return area;
}
