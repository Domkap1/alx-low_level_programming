#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Determine if a number is positive, negative or 0
 * Return: Always 0 (Success)
 */

int main(void)
{
        int i;

        srand(time(0));
        i = rand() - RAND_MAX / 2;
        if (i > 0)
        {
                printf("%d is positive\n", i);
        }

        else if (i == 0)
        {
                printf("%d is zero\n", i);
        }
        else
        {
                printf("%d is negative\n", i);
        }
        return (0);
}

