#include <stdio.h>

/**
  * before_main - function that executes before the main function.
  */
void before_main(void) __attribute__((constructor));
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
