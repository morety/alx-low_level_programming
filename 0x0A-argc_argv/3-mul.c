#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that multiplies two numbers
 * @argc: number of arguments passed
 * @argv: array of strings
 * Return: 0
 * otherwise 1
 */
int main(int argc, char *argv[])
{
	int a, i;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	i = atoi(argv[2]);
	printf("%d\n", a * i);

	return (0);
}
