/**
 * print_name - Print A Name
 * @name: The name
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (*f == '\0')
		return;
	f(name);
}
