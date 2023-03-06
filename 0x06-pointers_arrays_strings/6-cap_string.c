#include "main.h"

/**
 * cap_string - A function capitalizes all words of a string
 * @string: String to be capitalized
 *
 * Return: uppercase character corresponding to string
 */
char *cap_string(char *string)
{
	int a;

	a = 0;
	while (string[a])
	{
		while (!(string[a] >= 'a' && string[a] <= 'z'))
			a++;
		if (string[a - 1] == ' ' ||
		    string[a - 1] == '\t' ||
		    string[a - 1] == '\n' ||
		    string[a - 1] == ',' ||
		    string[a - 1] == ';' ||
		    string[a - 1] == '.' ||
		    string[a - 1] == '!' ||
		    string[a - 1] == '?' ||
		    string[a - 1] == '"' ||
		    string[a - 1] == '(' ||
		    string[a - 1] == ')' ||
		    string[a - 1] == '{' ||
		    string[a - 1] == '}' ||
		    a == 0)
			string[a] -= 32;
		a++;
	}
	return (string);
}
