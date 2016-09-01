#include <stdio.h>
#include <stdlib.h>
#include "input.h"
#define SIDES_OF_TRIANGLE 3

Triangle* get_triangle(){
  Triangle *triangle = malloc(sizeof(Triangle));
  get_cartesian_point(&triangle->vector1);
  get_cartesian_point(&triangle->vector2);
  get_cartesian_point(&triangle->vector3);
  return triangle;
}
void get_cartesian_point(Cartesian_point* vertice){

  printf("Inform the cordinates X  \n");
  scanf("%d",&vertice->x);
  printf("Inform the cordinates Y \n");
  scanf("%d",&vertice->y);
}

void list_missing_triangle(){
  printf("Triangle does not exists\n");
}

void list_perimeter(double perimeter){
    printf("Perimeter of the triangle is: %.2f \n", perimeter);
}

void list_area(double area){
    printf("Area of the triangle is: %.2f \n", area);
}

void list_side(int vertice, double side){
  printf("Side of the vertice n%d is: %.2f \n", vertice, side);
}
