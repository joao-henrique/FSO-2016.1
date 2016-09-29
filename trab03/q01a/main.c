#include <stdio.h>
#include <stdlib.h>
#include "libprime.h"

int main(){
  
  unsigned int i = create_prime();
  printf("%u\n", i);

  return 0;

}
