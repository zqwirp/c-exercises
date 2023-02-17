#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main () {
	/* need to include stdlib.h */
	system("clear");

	printf("\nhi mom\n\n");

	char my_choice[100];
	char *rock = "rock";

	printf("input your choice: ");
	scanf("%s", my_choice);

	printf("\nyour choice is %s\n", my_choice);

	int res = strcmp(my_choice, rock);

	if (res == 0)
		printf("idiot\n\n");

	return 0;
}

