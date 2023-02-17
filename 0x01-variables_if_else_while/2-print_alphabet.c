#include <stdio.h>
/**
 * main - Entry point, print the alphabet in lowercase
 *
 * Return: Always 0 if exited properly
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
