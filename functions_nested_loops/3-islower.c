#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 *_islower - Tells you if c is lower case
 *
 *@c: stores return from is lower , 1 for lower
 *Return: c value
 */
int _islower(int c)
{

	if (islower(c))
	{
		c = 1;
	}
	else
	{
		c = 0;
	}
return (c);
}
