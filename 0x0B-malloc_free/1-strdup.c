#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*_strdup -function that returns a pointer to a newly allocated space in memory
*@str: string input
*Return: *m or NULL
*/




char *_strdup(char *str)
{
	int size_str;
	char *m;
	/*this condition is required in str */
	if (str == NULL)
		return (NULL);
	/* for loop to for string input till the end null term*/
	for (size_str = 0; size_str != '\0'; size_str++)
		;
	/**
	 * hn3ml paa memory tshel the previuse values
	 *adding +1 3shan n2flha b elterminition
	 */
	m = (char *) malloc((size_str + 1) * sizeof(char));
	if (m != NULL)
	{
		/*using strcpy to copping str in m*/
		strcpy(m, str);
	}
	else
	{
		return (NULL);
	}
	return (m);
}
