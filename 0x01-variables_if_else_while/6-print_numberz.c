#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int q;

	q = '0';

	while (q <= '9')
	{
		putchar(q);
		q++;
	}
	putchar('\n');
	return (0);
}
