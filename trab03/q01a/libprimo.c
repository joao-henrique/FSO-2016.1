#include "libprimo.h"
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define NOT_PRIME 10
#define PRIME 0

int gera_primo(){
  unsigned int number = NOT_PRIME;
  while (testa_primo(number) != PRIME){
    srand(time(NULL));
    number = rand() % 4294967295;
  }
  return number;
}

int testa_primo(int prime){
  int test(int prime){
    double root_n;
    root_n = ceil(sqrt(prime));
    (int) root_n;
    for (int i = 3; i <= root_n; i = i + 2){
      if ((prime % i) == 0)
        return 1;
    }
    return 0;
  }
  if (prime != 2 && (prime % 2) == 0)
    return 1;
  else if (prime != 3 && (prime % 3) == 0)
    return 1;
  else if (prime != 5 && (prime % 5) == 0)
    return 1;
  else if (prime != 7 && (prime % 7) == 0)
    return 1;
  else if(test(prime) != 0)
    return 1;
  else
    return 0;
}
