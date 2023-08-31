#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A string representing the binary number.
 *
 * Return: The converted number, or 0 if invalid input.
 */
unsigned int binary_to_uint(const char *b)
{
    int i;
    unsigned int result = 0;

    if (!b)
        return 0;

    for (i = 0; b[i] != '\0'; i++)
    {
        if (b[i] < '0' || b[i] > '1')
            return 0;

        result = (result * 2) + (b[i] - '0');
    }

    return result;
}
