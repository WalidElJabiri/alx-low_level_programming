# include <stdio.h>

/**
 * printf - printing the size of various types on the computer it is compiled and run on.
 * Return: 0
 */

int main(void)
{
	prinf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	prinf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	prinf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(li));
	prinf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lli));
	prinf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

	return(0);
}
