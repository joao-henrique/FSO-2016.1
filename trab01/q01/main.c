#include <stdio.h>
#include <stdlib.h>
#include "input.h"
#include "libcalcs.h"

int main(){

  Triangle *triangle = get_triangle();
  printf("\n");

  double exists = calc_area(triangle);

  if(exists != 0){
    sides_triangle(triangle);
    perimeter_triangle(triangle);
  }
  else{
    //DO NOTHING
  }

  return 0;
}
