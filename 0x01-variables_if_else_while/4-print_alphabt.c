#include <stdio.h>

/**
 * main -  prints the alphabet in lowercase except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'e' && alphabet != 'q')
		{
		putchar(alphabet);
		}
		alphabet++;
	}
	putchar('\n');
	return (0);
}
