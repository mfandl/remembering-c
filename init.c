#include <stdio.h>

int a;

int main (int argc, char** argv) {
  for (int j = 0; j < 10000; ++j) {
    int i;
    if (i != 0)
      printf("%d: %d\n", j, i);
  }
}
