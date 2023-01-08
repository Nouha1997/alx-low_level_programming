#include <stdio.h>
#include "main.h"

/**
 * main - Print the name of the program
 *
 * @argc: numbers of arguments
 *
 * @argv: array of arguments
 *
 * Return: always 0 (success)
 */

int main(int argc_attribute_((unused)), char *argv[])

{
	printf("%s\n", *argv);

	return (0);

}
