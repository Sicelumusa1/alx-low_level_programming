
/**
 * main.h header file function definitions.
 * Define all functions here, that are declared in main.h.
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}

void print_alphabet(void)
	{	
		int c;

		for (c = 'a' ; c < 'z' ; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}

void print_alphabet_x10(void)
	{
		int c, e;

		for (e = 0 ; e <= 10 ; e++)
		{
			for (c = 'a' ; c <= 'z' ; c++)
			{
				_putchar(c);
			}	
		}
		_putchar('\n');
		return (0);
	}
