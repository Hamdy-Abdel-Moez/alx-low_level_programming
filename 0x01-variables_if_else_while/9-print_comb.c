#include <stdio.h>
/**
 * main - Entry point, print all possible combinations of single-digit numbers
 *
 * Return: Always 0 if exited properly
 */
int main(void)
{
	int i, x;

	x = 44;

	for (i = 48 ; i <= 57 ; i++)
	{
		putchar(i);
		if (i != 57)
		{
		putchar(x);
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
