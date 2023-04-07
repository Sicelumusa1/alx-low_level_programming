

char *_strncpy(char *dest, char *src, int n)
{
        char *result = dest;

        while (n > 0)
        {

                if ((*result = *src) != 0)
                {
                        src++;
                }
                result++;
                n--;
        }
        return (dest);
}
