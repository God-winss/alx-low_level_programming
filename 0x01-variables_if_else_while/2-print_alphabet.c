#include <stdio.h>
/**
 * main - entry point
 *
 * return: Always 0
 */
int main(void)
{
	char c;
	
	for (c ='a'; c <= 'Z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
