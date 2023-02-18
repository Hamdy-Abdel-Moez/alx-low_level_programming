#include <stdio.h>
/**
 * main - Entry point, print numbers of base 16 in lowercase
 *
 * Return: Always 0 if exited properly
 */
int main(void)
{
	int i;
	char ch;

	for (i = 48 ; i <= 57 ; i++)
	{
		putchar(i);
	}
	for (ch = 'a' ; ch <= 'f' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
