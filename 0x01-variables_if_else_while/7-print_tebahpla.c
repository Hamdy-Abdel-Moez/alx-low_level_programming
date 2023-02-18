#include <stdio.h>
/**
 * main - Entry point, print the alphabet in lowercase reversed
 *
 * Return: Always 0 if exited properly
 */
int main(void)
{
	char ch;

	for (ch = 'z' ; ch >= 'a' ; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
