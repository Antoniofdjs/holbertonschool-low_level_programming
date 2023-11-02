#include "main.h"
#include <string.h>
/**
*help_palindrome- Helps find palidrome strings
*
*@start: index 0 for s[]
*@size: size of string - 1, no null
*@s: pointer string from is_palindrome function
*Return: Same helper until 1 for prime or 0 if not
*/
int help_palindrome(int start, int size,  char *s)
{
	if (s[start] != s[size])
		return (0);
	if (start > size)
		return (1);
	return (help_palindrome(start + 1, size - 1, s));
}
/**
*is_palindrome- determine if string is empty
*
*@s: pointer to string
*Return: 1 if empty string
*/
int is_palindrome(char *s)
{
	if (s[0] == '\0' || s[1] == '\0')
		return (1);
	return (help_palindrome(0, strlen(s) - 1, s));
}
