#ifndef TRIANGLE_H
#define TRAINGLE_H

typedef struct{
  int x;
  int y;
} Cartesian_point;

typedef struct{
  Cartesian_point vector1;
  Cartesian_point vector2;
  Cartesian_point vector3;
} Triangle;

#endif
