#include <stdio.h>

/**
<<<<<<< HEAD
 * main - prints the alphabet in lowercase,
 * followed by a new line
=======
 * main - Prints numbers between 00 to 89.
 *
>>>>>>> bb3db867d16265271348c0a2b5ebe647f8957e5f
 * Return: Always 0 (Success)
 */
int main(void)
{
<<<<<<< HEAD
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
=======
	int i, e;

	i = 48;
	e = 48;

	while (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (e != i && e < i)
			{
				putchar(e);
				putchar(i);
				if (i == 57 && e == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		e++;
>>>>>>> bb3db867d16265271348c0a2b5ebe647f8957e5f
	}
	putchar('\n');
	return (0);
}
