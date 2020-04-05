#include <stdio.h>
#define LENGTH 10

int main() {

  const char searchChar = 'k';

  char cArr[LENGTH];

    printf("%s\n", "Enter 10 Letter:");

    for(int i = 0; i < LENGTH; i++)
      scanf("%c\n", &cArr[i]);

    for(int i = 0; i < LENGTH; i++)
      if(cArr[i] == searchChar)
        printf("%s\n", "You input a k!!!!!");
      else
        printf("%s\n", "You didn't input a 'k'");
  return(0);
}
