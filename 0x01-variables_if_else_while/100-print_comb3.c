#include <stdio.h>
/**
 * main - The task are too much for novice
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit_1, digit_2;

	digit_1 = '0';
	digit_2 = '0';

	while
		(digit_1 <= '9') {
		while
			(digit_2 <= '9') {
		if
			(digit_1 < digit_2) {
			putchar(digit_1);
			putchar(digit_2);
		if
			(digit_1 != '8' || (digit_1 == '8' && digit_2 != '9')) {
			putchar(',');
			putchar(' ');
			}
		}
		digit_2++;
			}
			digit_1++;
			digit_2 = '0';
		}
		putchar('\n');
		return (0);
}
