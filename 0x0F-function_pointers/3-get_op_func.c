#include "3-calc.h"
#include "string.h"
/**
 * get_op_func - function pointer that selects the correct function to perform
 * the operation asked
 * @s: the operator given by
 * Return: pointer to the function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op) /*ops= all array,op=add eli h3wd feh*/
	{
		/*copmare 2 str (s paramer given and const op you wrote*/
		if (strcmp(ops[i].op, s) == 0)
			/*if they're the same it 'll == 0*/
			return (ops[i].f);
		/*.f is a paramter in function in header file*/
		i++;	 /*till reched 4*/
	}
	/*else = the ops and s arnt the same */
	return (NULL);
}
