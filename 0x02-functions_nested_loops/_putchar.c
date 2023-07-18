#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * 0c: the character to print
 *
 * Return: On success 1,
 * On error, -1 is returned, and wrrno is set appropriately.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
