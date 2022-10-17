#include <stdio.h>
/**
 * main - Starting point
 *
 * Description: Displays all the alphabet in lower case
 *
 * Return: Alwyas 0 (Success)
*/
int main(void)
{
	char al;
	
	al = 'a';
	while (al <= 'z')
	{
		putchar(al);
		al++;
	}
	putchar('\n');

	return (0);
}
