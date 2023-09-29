#include "main.h"
/**
 *binary_to_uint - conversion num
 *@b: values get
 *Return: z result
 */
unsigned int binary_to_uint(const char *b)
{

	unsigned int z = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		z = z * 2 + (b[i] - '0');
	}
	return (z);
	/*z is the result*/
}
