#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: amount of bytes
 *
 * Return: pointer to the allocated memory
 * if malloc fails, status value is equal to 98
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	char *s;
	unsigned int 
