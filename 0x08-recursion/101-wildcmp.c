#include "main.h"
/**
 * wildcmp - Compare strings
 * @r1: pointer to string params
 * @r2: pointer to string params
 * Return: 0
 */
int wildcmp(char *r1, char *r2)
{
		if (*r1 == '\0')
	{
		if (*r2 != '\0' && *r2 == '*')
	{
		return (wildcmp(r1, r2 + 1));
	}
		return (*r2 == '\0');
	}
		if (*r2 == '*')
	{
		return (wildcmp(r1 + 1, r2) || wildcmp(r1, r2 + 1));
	}
		else if (*r1 == *r2)
	{
		return (wildcmp(r1 + 1, r2 + 1));
	}
		return (0);
}

