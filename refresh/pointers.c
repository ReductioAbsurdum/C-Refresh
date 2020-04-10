#include <stdio.h>

int main() {

  int myStupidInt = 90;
  int *pointToMyStupidInt = &myStupidInt;
  int **pointerToPointerToMyStupidInt = &pointToMyStupidInt;

  printf("Values:\n");
  printf("%i\n", myStupidInt);
  printf("%p\n", pointToMyStupidInt);
  printf("%p\n", pointerToPointerToMyStupidInt);

  printf("Memory Slot Hexes:\n");
  printf("%p\n", &myStupidInt);
  printf("%p\n", &pointToMyStupidInt);
  printf("%p\n", &pointerToPointerToMyStupidInt);

  return(0);
}

//consider char pointers to a string:

/*
char* str = "jimmy eats a lot!";

printf("%p\n", &str);
printf("%p\n", &str[0]);
printf("%p\n", &str[1]);
printf("%p\n", &str[2]);
printf("%p\n", &str[3]);
printf("%s\n", str);
*/



//Single pointer example:

/*

#include <stdio.h>
int main() {

  int nine = 9;
  int *n;

  *n = nine;
  //above is same as below:
  n = &nine;


  int y = sizeof(nine);

  printf("Address of nine : %p\n", &nine);
  printf("Address of n : %p\n", &n);
  printf("\n");
  printf("Value of nine : %i\n", nine);
  printf("Value of n : %p\n", n);


  return(0);
}

*/
