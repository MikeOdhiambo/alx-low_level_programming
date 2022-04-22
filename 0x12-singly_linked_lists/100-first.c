#include <stdio.h>
void strt(void) __attribute__ ((constructor));

/**
 * strt - Runs before the main function
 */
void strt(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
