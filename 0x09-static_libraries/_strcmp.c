

int _strcmp(char *s1, char *s2)
{
        int i = 0;
        int strcmp;

        while (s1[i] != '\0' && s2[i] != '\0')
        {
                strcmp = s1[i] - s2[i];

                if (strcmp != 0)
                {
                        return (strcmp);
                }
                i++;
        }
        return (0);
}
