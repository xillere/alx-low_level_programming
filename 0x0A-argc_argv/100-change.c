#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: counts
 * @argv: strings
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int num, res, i;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	res = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= coins[i])
		{
			res++;
			num -= coins[i];
		}
	}

	printf("%d\n", res);
	return (0);
}
