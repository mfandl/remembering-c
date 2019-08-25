#include <stdlib.h>
#include <stdio.h>

int *fn() {
  int arr[] = {1, 2, 3};

  return arr;
}

int *fn2() {
  int *arr = (int[]){1, 2, 3};

  return arr;
}

int main(int argc, char** argv) {
  int *n = fn();
  int *n2 = fn2();

  printf("%d\n%d\n", *n, *n2);
}
