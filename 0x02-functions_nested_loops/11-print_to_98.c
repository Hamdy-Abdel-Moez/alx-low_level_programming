#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry point, print all natural numbers from n to 98
 *
 * @n: the given number
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}