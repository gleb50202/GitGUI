#include <stdio.h>

int main(int argc, char **argv)
{
	printf("Enter your first name: ");
	fgets(first, 255, stdin);
	first[strlen(first) - 1] = '\0'; /* remove the newline at the end */

	printf("Hello world!\n");
	return 0;
}
