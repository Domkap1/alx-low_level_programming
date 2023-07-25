#iinclude "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	/* Calculate the length of the string */
	while (s[len] != '\0len++;

	while (i < len && f == 0)
	{
	if (s[i] == '-')
		++d;

	if (s[i] >= '0' && s[i] <= '9')
	{
		digit = s[i] - '0';
            if (d % 2)
                digit = -digit;
            if (n > INT_MAX / 10 || (n == INT_MAX / 10 && digit > 7))
                return INT_MAX; // Overflow check
            if (n < INT_MIN / 10 || (n == INT_MIN / 10 && digit < -8))
                return INT_MIN; // Underflow check
            n = n * 10 + digit;
            f = 1;
            if (s[i + 1] < '0' || s[i + 1] > '9')
                break;
            f = 0;
        }
        i++;
    

    if (f == 0)
        return (0);

    return (n);
}
