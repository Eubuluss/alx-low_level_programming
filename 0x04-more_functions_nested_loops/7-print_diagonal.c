#include "main.h"

/**
 *rint_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
*/

void print_diagonal(int n)
{
	int i = 0, ii;

	while (i < n && n > 0)
	{
		ii = 0;
		while (ii < i)
		{
			_putchar(' ');
			ii++;
		}

		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}

