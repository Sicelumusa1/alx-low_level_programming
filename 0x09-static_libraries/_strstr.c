#include "main.h"
#include <string.h>
#include <stddef.h>

char *_strstr(char *haystack, char *needle)
{
        int len1, len2;

        len2 = strlen(needle);
        if (len2 == 0)
        {
                return (haystack);
        }
        len1 = strlen(haystack);
        while (len1 >= len2)
        {
                len1--;
                if (!memcmp(haystack, needle, len2))
                {
                        return (haystack);
                }
                haystack++;
        }
        return (NULL);
}
