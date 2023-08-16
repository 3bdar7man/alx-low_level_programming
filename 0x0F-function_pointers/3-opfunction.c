/**
 * get_op_func - some func
 * @s: some arg
 * @a: some arg
 * @b: some arg
 *
 * Return: the wanted value
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+",op_add} 
		{"-",op_sub} 
		{"*",op_mul} 
		{"/",op_div} 
		{"%",op_mod} 
		{"NULL",NULL}
	};
	int i;
}
