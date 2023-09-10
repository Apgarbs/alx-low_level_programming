#include <stdio.h>
/**
 * main - The task is killing
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit_1, digit_2, digit_3;

	digit_1 = '0';
	digit_2 = '0';
	digit_3 = '0';

	while
		(digit_1 <= '9') {
		while (digit_2 <= '9')
		{
		digit_3 = '0';
		while (digit_3 <= '9')
		{
			if (digit_1 < digit_2 && digit_2 < digit_3)
			{
				putchar(digit_1);
				putchar(digit_2);
				putchar(digit_3);
			if (digit_1 != '7')
			{
				putchar(',');
				putchar(' ');
			}
		}
		digit_3++;
		}
		digit_2++;
			}
			digit_1++;
			digit_2 = '0';
		}
		putchar('\n');
		return (0);
}
