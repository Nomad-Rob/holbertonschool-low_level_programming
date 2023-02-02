#include "main.h"

/**
* print_most_numbers - prints the numbers from 0 - 9 followed by new line
*
*
* Return: nothing
*/

void print_most_numbers(void)

{
	int i;

	for (i = 0; i <= 9; i++)

	{
		_putchar(i + '0');
	}
	_putchar('\n');

}
