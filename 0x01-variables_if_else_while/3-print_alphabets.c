#include <stdio.h>
/**
 * main - Entry point, print the alphabet in lowercase then in uppercase
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
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
