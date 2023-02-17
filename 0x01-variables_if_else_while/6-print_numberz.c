#include <stdio.h>
/**
 * main - Entry point, print from 0 to 9 using putchar
 *
 * Return: Always 0 if exited properly
 */
int main(void)
{
	int i;

	for (i = 48 ; i <= 57 ; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
