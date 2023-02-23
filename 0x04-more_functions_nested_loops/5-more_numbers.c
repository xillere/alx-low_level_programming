#include <stdio.h>
/**
 * more_numbers - Entry point
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int x = 0;

	while (x < 10)
	{
		int i = 48;
		int num = 48;
		int check = 1;
		int num2 = 48;

		while (i < 58)
		{
			putchar(i);
			i++;
		}

		while (num < 53)
		{
			if (check == 1)
			{
				num2 = 49;
				check = 0;
			}
			else
			{
				check = 1;
				num2 = num;
				num++;
			}
			putchar(num2);
		}
		x++;
		putchar('\n');
	}
}
