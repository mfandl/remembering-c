#include <stdio.h>

void writeln(int n) {
  printf("%d\n", n);
}

void foreach(int* arr, int len, void (*cb)(int)) {
  for(int i = 0; i < len; ++i) {
    cb(arr[i]);
  }
}

int main(int argc, char** argv) {
  int arr[] = {1, 2, 3};

  foreach(arr, 3, writeln);
}
