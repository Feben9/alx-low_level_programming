/**
 * main.h is a header file for
 * C-Functions, nested loops
 * alx programming
 */
int _putchar(char c);
void print_alphabet(void)
{
	char x;
	
	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);
	_putchar('\n');
	return (void);
}
