

char *_strcat(char *dest, char *src)
{
        char *result = dest;

        while (*dest != '\0')
        {
                dest++;
        }
        while ((*dest = *src) != '\0')
        {
                dest++;
                src++;
        }
        return (result);
}
