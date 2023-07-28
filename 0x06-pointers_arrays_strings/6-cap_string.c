#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @c: string to be capitalized.
 * Return: the capitalized string
 */

char *cap_string(char *c)
{
	int i = 0;
	if (c[i] >= 'a' && c[i] <= 'z')
	{
		c[i] = c[i] - 32;
	}
	for (; c[i] != '\0'; i++)
	{
		if (c[i] == ' ' || c[i] == '\t' || c[i] == '\n' || c[i] == ',' || c[i] == ';'
			       	|| c[i] == '.' || c[i] == '!' || c[i] == '?'
				|| c[i] == '"' || c[i] == '(' || c[i] == ')'
				|| c[i] == '{' || c[i] == '}')
		{
			if (c[i] >= 'a' && c[i] <= 'z')
			{	
				c[i] = c[i] - 32;
			}
		
		}
	}
	return (c);
}
