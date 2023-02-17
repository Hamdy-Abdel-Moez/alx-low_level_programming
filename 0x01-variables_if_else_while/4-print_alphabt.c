#include <stdio.h>
/**
 * main - Entry point, print the alphabet in lowercase without 'e' and 'q'
 *
 * Return: Always 0 if exited properly
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch == 'q' || ch == 'e')
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
