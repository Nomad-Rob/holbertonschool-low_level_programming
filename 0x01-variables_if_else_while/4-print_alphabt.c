#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		if ((ch !=  'e') && (ch != 'q'))
		{
			putchar(ch);
			++ch;
		}
		else
			++ch;
	}
	putchar('\n');

	return (0);
}

