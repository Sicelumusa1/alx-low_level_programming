#include "main.h"
#include <stddef.h>

char *_strpbrk(char *s, char *accept)
{
        char *ps = s;
        char *paccept = accept;

        for (; *ps != '\0'; ++ps)
        {
                for (; *paccept != '\0'; ++paccept)
                {
                        if (*ps == *paccept)
                        {
                                return (ps);
                        }
                }
                paccept = accept;
        }
        return (NULL);
}
