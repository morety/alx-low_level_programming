#include "main.h"
#include<stdio.h>
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number to check the value of
 * @index: the index to look for the number
 * Return: 0 on success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int number = *n;

	if (index > sizeof(8) * 8)
	{
		if (n == NULL)
		{
			return (-1);
		}
		else
		{
			return (-1);
		}
	}

	number &= ~(1 << index);

	*n = number;

	return (1);
}
