#include "main.h"
/**
 * rev_string - Reverses string
 *
 * @s: stores string
 */
void rev_string(char *s)
{

	int i = 0;
	int j = 0;
	int end;
	char temp[10];
	
	while (s[i] != '\0')
{
	i++;
}
i = i - 1;
end = i;

while (i > j)
{
	if (s[i] != '0')
	{
		temp[j] = s[i];
		temp[i] = s[j];
	}
	i--;
	j++;
}
i = 0;
j = 0;
while (i <= end)
{
	if (temp[j] != '\0')
	{
		s[i] = temp[j];
	}
	i++;
	j++;
}
}
