#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

int main(){
  void* handle = dlopen ("libprime.so", RTLD_LAZY);
  unsigned int(*create_prime)() = dlsym (handle, "create_prime");
  unsigned int i = (unsigned int)(*create_prime)();
  dlclose (handle);
  printf("%u\n", i);
  return 0;
}
