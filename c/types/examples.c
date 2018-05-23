#include <stdio.h>

char myChar = 'H';
int twentyThree = 23;
long longNumber = 13798000000;
float litersPerPint = 0.568f; 
double speed = 0.0123;

void noParamsNoReturnValue(void) {
  puts("Takes no params, returns no value\n");
}

int main(int argc, char** argv) {
  printf("Char is %c, special number is %d, the long one is %lu, litres per pint is %4.2f. %e fast.", myChar, twentyThree, longNumber, litersPerPint, speed);
  return 0;
}
