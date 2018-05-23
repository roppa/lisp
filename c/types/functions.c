#include <stdio.h>

int sum(int a, int b) {
  int total = a + b;
  return total;
}

int main(int argc, char** argv) {
  int total = sum(1, 2);
  printf("1, 2 added together gives %d\n", total);
  return 0;
}
