#include <stdio.h>

/**
<<<<<<< HEAD
 * main - prints all possible different combinations of three digits
=======
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
>>>>>>> bb3db867d16265271348c0a2b5ebe647f8957e5f
 * Return: Always 0 (Success)
 */
int main(void)
{
<<<<<<< HEAD
	int n, m, l;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			for (l = 50; l < 58; l++)
			{
				if (l > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(l);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
=======
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
>>>>>>> bb3db867d16265271348c0a2b5ebe647f8957e5f
	putchar('\n');
	return (0);
}
