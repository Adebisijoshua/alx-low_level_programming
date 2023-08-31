#include "main.h"
int _strlen_recursion(char *len);
int palindrome(char *txt, int ini, int end);

/**
 * is_palindrome - This function will probe if a string is palindrome
 * @s: This is the char to review
 *
 * Return: This will return 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int arr;

	arr = _strlen_recursion(s);
	if (arr == 0)
		return (1);
	return (palindrome(s, 0, arr - 1));
}

/**
 * _strlen_recursion - This function will probe if a string is palindrome
 * @len: This is the char to review
 *
 * Return: This will return 1 if a string is a palindrome and 0 if not.
 */
int _strlen_recursion(char *len)
{
	if (*len == '\0')
		return (0);
	len++;
	return (_strlen_recursion(len) + 1);
}

/**
 * palindrome - This function will probe if a string is palindrome
 * @txt: This is the char to review
 * @ini: This will be the sec
 * @end: This is the ser
 *
 * Return: It will return 1 if a string is a palindrome and 0 if not.
 */
int palindrome(char *txt, int ini, int end)
{
	if (txt[ini] != txt[end])
		return (0);
	if (ini < end + 1)
		return (palindrome(txt, ini + 1, end - 1));
	return (1);
}
