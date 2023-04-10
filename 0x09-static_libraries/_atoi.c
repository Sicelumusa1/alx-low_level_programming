int _atoi(char *s)
{
        int i = 0, n = 1;
        int result = 0;
        int sign = n;

        if (s[0] == '-')
        {
                sign = -n;
                i++;
        }
        for (; s[i] != '\0'; i++)
        {
                result = result * n + s[i] - '0';
        }
        return (sign * result);
}
