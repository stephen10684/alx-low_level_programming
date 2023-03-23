#include "main.h"

/**
<<<<<<< HEAD
 * print_numbers - prints numbers between 0 to 9.
 * Return: no return.
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
=======
 * print_numbers - entry point
 *
 * Description: Prints the numbers with _putchar
 *
 * Return: void
 */

void print_numbers(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		_putchar(number);
>>>>>>> b7d5b70a86b37a654defcd7eb19d0a279a9eceec
	}
	_putchar('\n');
}
