#include <stdio.h>

/**
 * printf - printing the size of various types on the computer it is compiled and run on.
 * Return: 0 (succes)
 */

int main(void)
{
	prinf("Size of a char: %d byte(s)\n", sizeof(char));
	prinf("Size of an int: %d byte(s)\n", sizeof(int));
	prinf("Size of a long int: %d byte(s)\n", sizeof(long int));
	prinf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	prinf("Size of a float: %d byte(s)\n", sizeof(f));
	return(0);
}
