#include <stdio.h>
/**
 * main - The entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
int digit_1, digit_2, digit_3, digit_4;

digit_1 = digit_2 = digit_3 = '0';
digit_4 = '1';

while (digit_1 <= '9')
{
	while (digit_2 <= '9')
	{
		while (digit_3 <= '9')
		{
			while (digit_4 <= '9')
			{
				if ((digit_1 < digit_3) || (digit_1 == digit_3 && digit_2 < digit_4))
				{
					putchar(digit_1);
					putchar(digit_2);
					putchar(' ');
					putchar(digit_3);
					putchar(digit_4);

				if (digit_1 == '9' && digit_2 == '8' && digit_3 == '9' && digit_4 == '9')
				{
					putchar('\n');
				} else
				{
					putchar(',');
					putchar(' ');
				}
				}
				digit_4++;
			}
			digit_4 = '0';
			digit_3++;
		}
		digit_3 = '0';
		digit_2++; }
	digit_2 = '0';
	digit_1++; }
return (0);
}
