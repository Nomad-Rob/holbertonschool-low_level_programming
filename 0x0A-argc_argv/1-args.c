#include "main.h"
#include "stdlib.h"
#include "stdio.h"

/**
* main - prints arguments
* @argc: counts number of arguments
* @argv: array of char in a pointer
* Return: 0
*
*/

int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	}
	printf("%d\n", i - 1);
	return (0);
}
