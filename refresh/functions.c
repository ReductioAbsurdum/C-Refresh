#include <stdio.h>

void transform(int * a){
  int b = 50;
  *a += b;
}

int main() {

  int a;
  int b;

  a = 67;
  b = 90;

  transform(&a);

  printf("transform : %i", b);
  printf("a : %i\n", a);

  return(0);
}
