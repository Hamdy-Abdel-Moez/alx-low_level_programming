#include <stdio.h>
/**
 * main - Entry point, print single digit numbers of base 10 start from 0 to 9
 *
 * Return: Always 0 if exited properly
 */
int main(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
