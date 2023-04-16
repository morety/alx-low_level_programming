#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that adds positive numbers
 * @argc: number of arguments passed
 * @argv: array of strings
 * Return: 1 if number contains symbols that are not digits
 * otherwise 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int a;

	for (a = 1; a < argc; a++)
	{
		int z = 0;

		while (argv[a][z])
		{
			if (argv[a][z] < '0' || argv[a][z] > '9')
			{
				printf("Error\n");
				return (1);
			}
			z++;
		}
		sum = sum + atoi(argv[a]);
	}

	printf("%d\n", sum);
	return (0);
}
