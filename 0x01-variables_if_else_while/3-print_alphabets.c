#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int i = 97;
	int j = 65;

	while (i < 97 + 26)
	{
		putchar(i);
		++i;
	}
	while (j < 65 + 26)
	{
		putchar(j);
		++j;
	}
	putchar('\n');
	return (0);
}
