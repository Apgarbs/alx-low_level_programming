#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char d;
	char t;

	d = '0';
	t = 'a';

	while
		(d <= '9') {
	putchar(d);
	d++;
	}
	while
		(t <= 'f') {
	putchar(t);
	t++;
	}
	putchar('\n');
	return (0);
}
