#incude "3-get_op_func.c"

/**
 * get_op_func - function pointer that selects the correct function to perform
 * the operation asked by user
 * @s: the operator giveb by the user
 *
 * Return: pointer to tne function that corresponds to the
 * operator given as a pointer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sun},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_add},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
