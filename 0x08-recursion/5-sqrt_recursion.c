#include "main.h"

/**
* _sqrt_helper - checks if perfect square
* @n: input
* @i: counter
* Return: if square root
*/

int _sqrt_helper(int n, int i)

{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (_sqrt_helper(n, i + 1));
	}
}

/**
* _sqrt_recursion - no loop - checking for perfect square
* @n: input
* Return: 0
*
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (_sqrt_helper(n, 1));
	}
}
