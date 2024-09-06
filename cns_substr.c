#include <stdlib.h>
#include <stdio.h>

char    *cns_substr(const char *str, unsigned int start, size_t len)
{
    int     i, j;
    char    *new_str;

    new_str = malloc(sizeof(char) * (len + 1));
    if (!new_str)
        return (NULL);
    i = start - 1;
    j = 0;
    while (len--)
    {
        new_str[j] = str[i];
        j++;
        i++;
    }
    new_str[j] = '\0';
    return (new_str);
}

int main(void)
{
    char    str1[] = "This is a test string";
    char    *str2;

    str2 = cns_substr(str1, 11, 11);
    printf("%s\n", str2);
    return (0);
}