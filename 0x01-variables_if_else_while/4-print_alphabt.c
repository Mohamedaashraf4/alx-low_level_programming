#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print  all alphabet letters except q ans e
 *
 * Return: Always 0 (succeess)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
