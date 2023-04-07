

unsigned int _strspn(char *s, char *accept)
{
        char *p;

        for (p = s; *p != '\0'; p++)
        {
                if (!strchr(accept, *p))
                {
                        break;
                }
        }
        return (p - s);
}
