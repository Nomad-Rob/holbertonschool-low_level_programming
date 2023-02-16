#include "main.h"
/**
 * print_rev - print string to console in reverse
 * @str: string to reverse print
 *
 *
 *
 */

void print_rev(char *str)
{
	int i;
	int count = 0;

	while (*str != '\0')
	{
		str++;
		count++;
	}
	for (i = count; i >= 0; --i)
	{
		if (i == count)
		{
			--str;
			continue;
		}
		_putchar(*str);
		--str;
	}
	_putchar('\n');

}
