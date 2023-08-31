#include "main.h"

/**
 * palindrome1 - obtains length of a
 * @a: string
 * @i: integer to count length
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int palindrome1(char *a, int i)
{
	if (*a == 0)
		return (i - 1);
	return (palindrome1(a + 1, i + 1));
}
/**
 * palindrome2 - compares string vs string reverse
 * @a: string
 * @l: length
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int palindrome2(char *a, int l)
{
	if (*a != *(a + l))
		return (0);
	else if (*a == 0)
		return (1);
	return (palindrome2(a + 1, l - 2));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_palindrome(char *s)
{
	int l;

	l = palindrome1(s, 0);
	return (palindrome2(s, l));
}

