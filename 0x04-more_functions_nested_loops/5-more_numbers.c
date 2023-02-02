#include "main.h"

/**
* more_numbers - function that prints ten times numbers from 0 - 14
*
* Return: nothing
*/

void more_numbers(void)

{
	int i;
	int u;
	int first;
	int last;

	for (i = 0; i < 10; i++)
	{
		for (u = 0; u <= 14; u++)
		{
			last = u;
			if (u >= 10)
			{
				first = 1;
				last = last % 10;
				_putchar(first + '0');
			}
			_putchar(last + '0');
		}
		_putchar('\n');
	}
}
