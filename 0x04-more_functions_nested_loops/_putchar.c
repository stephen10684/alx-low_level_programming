#include <unistd.h>
<<<<<<< HEAD
#include "main.h"
=======

>>>>>>> b7d5b70a86b37a654defcd7eb19d0a279a9eceec

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
