#include <stdio.h>
#include "main.h"
#include <stdio.h>
/**
*main - Prints 1-100 but coded with words
*
*Return: 0
*/
int main(void)
{
	int i = 1;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 != 0))
		{
			printf("Fizz ");
		}
		else
		if ((i % 5 == 0) && (i % 3 != 0))
		{
			if (i != 100)
			{
				printf("Buzz ");
			}
			else
				printf("Buzz\n");
		}
		else
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else
			 printf("%d ", i);
	}

	return (0);
}
