#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char message[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		putchar(message[i]);
	}
	putchar('\n');
	return (0);
}
