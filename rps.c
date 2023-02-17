#include <stdio.h>

int main () {
  printf("hi mom\n");

  char *s;

  printf("input your choice: ");
  scanf("%s", &s);

  printf("your choice is %s\n", &s);
}


