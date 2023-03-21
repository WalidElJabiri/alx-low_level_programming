#include "main.h"

/**
 * _isalpha - check if int is lower
 * @c: the int that will be checked
 * Return: 1 if lower, else 0
 */
int _isalpha(int c)
{
        if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
        {
                return (1);
        }
        else
        {
                return (0);
        }
}
