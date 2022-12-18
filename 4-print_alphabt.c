#include <stdio.h>

/**
 * main - Entry
 * Return: 0
 */

int main(void)
{
	int i = 97;

	while (i < 97 + 26)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
