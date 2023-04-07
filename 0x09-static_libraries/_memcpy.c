

char *_memcpy(char *dest, char *src, unsigned int n)
{
        char *tmp = dest;

        while (n-- > 0)
        {
                *dest = *src;
                dest++;
                src++;
        }
        return (tmp);
}
