#include "main.h"
/**
 * void print_alphabet_x10 - print alphabet ten times
 *
 * Description: print using _putchar
 */
void print_alphabet_x10(void);
{
	char l;
	int m;

	for (m = 0; m < 10; m++)
	{
		for
			(l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
			}
			_putchar('\n');
	}
}

