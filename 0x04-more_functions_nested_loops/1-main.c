#include <stdio.h>

/**
 * _isdigit- checks for a digit (0 through 9)
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
    char c;
    int _isdigit;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}
