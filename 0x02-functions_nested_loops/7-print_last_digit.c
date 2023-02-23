#include "main.h"

/**
 * print_last_digit - Entry point, prints the last digit of a number
 * @n: the integer that we take from last digit
 * Return: Value of the last digit
 */
int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (n < 0)
	{
		lastDigit = -lastDigit;
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
}
