#include <stdio.h>

struct Point {
  int x;
  int y;
};

int main(int argc, char** argv) {
  struct Point a = { .x = 2, .y = 3 };

  printf("%d . %d", a.x, a.y);
}
