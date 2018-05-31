#include <stdio.h>

typedef struct {
  char* name;
  char birthplace[50];
  int age;
} person;

int main(int argc, char** argv) {
  person Bob = {
    "Bob Johnson",
    "Johnsonville",
    34
  };
  printf("Hi, I'm %s, born in %s. Over %i years old.", Bob.name, Bob.birthplace, Bob.age);
  return 0;
}
