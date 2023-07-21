/**
 * _isupper - Checks for uppercase character
 * @c: The character to be checked
 * Return: 1 if uppercase character, otherwise 0
 */

int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return 1;
    }
    return 0;
}
