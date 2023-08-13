#include <stdio.h>

/**
 * main - Entry point
 *
 * Descreption: print all alphabet letters
 *
 * Return aleays 0 (success)
*/

int main(void)
{
		char ch = 'a';

		while (ch <= 'z')
		{
			putcher(ch);
			ch++;
		}
		putchar('\n');

		return (0);
}
