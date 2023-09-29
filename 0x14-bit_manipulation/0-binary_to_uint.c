#include "main.h"

unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0;
    unsigned int base = 1;  // Initialize the base value for the rightmost bit.

    // Find the length of the binary string.
    int len = 0;
    while (b[len] != '\0')
    {
        if (b[len] != '0' && b[len] != '1')
            return 0;  // Invalid binary string, return 0.
        len++;
    }

    // Convert the binary string to an unsigned int.
    for (int i = len - 1; i >= 0; i--)
    {
        if (b[i] == '1')
            result += base;
        base *= 2;  // Move to the next bit position (left).
    }

    return result;
}

