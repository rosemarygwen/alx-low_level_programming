#include <stdio.h>

/**
 * premain - execute code before the main
 * description - execute code before the main
 * return - nothing
 */
void __attribute__ ((constructor)) premain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
