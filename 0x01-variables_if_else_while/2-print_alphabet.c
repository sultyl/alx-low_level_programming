#include <stdio.h>

/**
 *main -> a program that prints the alphabet in lowercase, followed by a new line
 *and print the last digit of the number stored in the variable n
 *Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n')
		;
	return (0);
}
