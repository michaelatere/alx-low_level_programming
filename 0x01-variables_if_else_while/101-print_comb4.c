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

	while (n < 10)
	{
		while (m < 10)
		{
			while (l < 10)
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
