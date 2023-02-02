#include "main.h"

/**
* print_diagonal - function that draws a diagonal line on terminal
* @n: is the number of '\' to be printed
*
* Return: nothing
*/

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == j)
				{
					_putchar('\\');
					break;
				}
				else
				{
					_putchar(' ');
				}
			}
			if ((i + 1) != n)
				_putchar('\n');
		}
	}
	_putchar('\n');
}
