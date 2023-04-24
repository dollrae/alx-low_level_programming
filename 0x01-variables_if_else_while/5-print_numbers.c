#include <stdio.h>

/**
 * main - program that prints all single digit numbers of base 10
 * Return: Always 0
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
