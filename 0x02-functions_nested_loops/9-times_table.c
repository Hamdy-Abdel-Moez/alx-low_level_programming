#include "main.h"

/**
 * times_table - Entry point, prints the multiplication table starts with 0
 */

void times_table(void)
{
	int row, col, prod, t, o;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			prod = row * col;
			t = prod / 10;
			o = prod % 10;

			if (col == 0)
			{
				_putchar('0');
			}
			else if (prod < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(o + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(t + '0');
				_putchar(o + '0');
			}
		}
		_putchar('\n');
	}
}
