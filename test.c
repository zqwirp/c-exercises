#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
  int random_num;
  int my_num;
  char *str;

  srand(time(0)); // seed the random number generator with the current time

  // generate a random number between 1 and 10
  random_num = (rand() % 10) + 1;
  printf("Input your number: ");

  scanf("%d", &my_num);

  printf("My number: %d\n", my_num);
  printf("Random number: %d\n", random_num);

  if (random_num == my_num)
  {
    str = "correct";
  }
  else
  {
    str = "incorrect";
  }

  printf("Result: %s\n", str);

  return 0;
}
