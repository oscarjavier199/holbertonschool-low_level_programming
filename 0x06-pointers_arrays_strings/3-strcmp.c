#include "main.h"

/**
 ** _strcmp - compare two strings
 ** @s1: pointer for the first string we want to compare
 ** @s2: pointer for the second string we want to compare
 ** Return: and integer
 **/

int _strcmp(char *s1, char *s2)
{
	int j;
	int WholeNumber;

	WholeNumber = 0;
	for (j = 0; s1[j] != '\0'; j++)
	{
		if (s1[j] - s2[j] != 0)
		{
			WholeNumber = s1[j] - s2[j];
			break;
		}
	}
	if (WholeNumber == 0 && s1[j] == '\0')
		WholeNumber = s1[j] - s2[j];
	return (WholeNumber);
}
