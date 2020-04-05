#include <stdio.h>
#include <ctype.h>

int main() {

  char myStr[100] = "this is my amazing string!";

  int arrLength = sizeof(myStr) / sizeof(myStr[0]);

  for(int i = 0; i < arrLength; i++){
    if(isalpha(myStr[i])){
      printf("%c\n", myStr[i]);
    }
  }

  printf("%s\n", myStr);

  return(0);
}
