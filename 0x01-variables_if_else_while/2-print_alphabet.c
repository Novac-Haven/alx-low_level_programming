#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int i = 97;

	while (i < 97 + 26)
	{
		putchar(i);
		++i;
	}
	putchar('\n');
	return (0);
}
