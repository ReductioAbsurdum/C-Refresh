#include <stdio.h>
#include <string.h>

struct Book{
  char Author[100];
  char Name[100];
  int id;
};

int main() {

  struct Book myBook;

  strcpy(myBook.Author, "jim beam");
  strcpy(myBook.Name, "The Wild Willie");
  myBook.id = 483984;

  printf("%s\n", myBook.Author);
  printf("%s\n", myBook.Name);
  printf("%i\n", myBook.id);

  return(0);
}
