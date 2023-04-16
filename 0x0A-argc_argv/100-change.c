#include "main.h"
#include<stdlib.h>
#include<stdio.h>
/**
  *main - program to make change an amount of money
  *@argc: number of arguments
  *@argv: array arguments
  *Return: 0 on success
  */
int main(int argc, char *argv[])
{
	int x, j, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	result = 0;
	if (x < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5 && x >= 0; j++)
	{
		while (x >= coins[j])
		{
			result++;
			x -= coins[j];
		}
	}
	printf("%d\n", result);
	return (0);
}
