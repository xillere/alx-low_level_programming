#include <stdio.h>
/**
 * print_chessboard - Entry point
 * @a: pieces
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int x, i;

	for (i = 0; i < 8; i++)
	{
		for (x = 0; x < 8; x++)
		{
			putchar(a[i][x]);
		}
		putchar('\n');
	}
}
