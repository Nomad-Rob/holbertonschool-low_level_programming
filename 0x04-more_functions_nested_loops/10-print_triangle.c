#include "main.h"

/**
* print_triangle - function that prints a triangle
* @size: size of the triangle
*
* Return: nothing
*/

void print_triangle(int size)
{
	int i;
	int j;
	int s;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= (size - i); j++)
			{
				_putchar(' ');
			}
			for (s = 1; s <= i; s++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
