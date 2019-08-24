#include <stdio.h>


int main(int argv, char** argc) {
  char *s = "helloa";
  *s = 'b';

  printf("%s", s) ;
}
