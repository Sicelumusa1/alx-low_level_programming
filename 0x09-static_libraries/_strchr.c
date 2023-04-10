char *_strchr(char *s, char c)
{
        char *pc = &c;

        for (; *s != (char)c; ++s)
        {
                if (*s == '\0')
                {
                        return ('\0');
                }
        }
        return (pc);
}
