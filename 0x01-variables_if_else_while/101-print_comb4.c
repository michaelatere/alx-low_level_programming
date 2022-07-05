#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	int m = 1;
	int l = 2;

	for (n = ; n < 10; n++)
	{
		for (m < 10)
		{
			for (l < 10)
			{
				if (l > m && m > n)
				{
					putchar('0' + n);
					putchar('0' + m);
					putchar('0' + l);
					if (n != 7 || m != 8)
					{
						putchar(',');
						putchar(' ');
					}
				}
				l++;
			}
			m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
