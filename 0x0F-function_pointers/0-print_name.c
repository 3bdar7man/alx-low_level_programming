/**
 * print_name - some func
 * @name: some arg
 * @f: some arg
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
