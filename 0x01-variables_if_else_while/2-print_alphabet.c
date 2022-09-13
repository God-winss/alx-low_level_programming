#include <stdio.h>
/**
* main - entry point
*
* return: Always 0
*
*/
int main(void)
{
	char a;
	
	for (a = 'a'; a <= 'Z'; a++)
		putchar(a);

	putchar('\n');
	return (0);
}
