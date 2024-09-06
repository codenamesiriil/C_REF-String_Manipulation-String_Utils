#include <stdlib.h>

size_t  cns_strlen(char *str)
{
    size_t  i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}

int check_delimiter(char c, char *del)
{
    int i = 0;

    while (del[i] != '\0')
    {
        if (c == del[i])
            return (1);
        i++;
    }
    return (0);
}

int count_str(char *str, char *del)
{
    int i = 0;
    int ct = 0;

    while (str[i] != '\0')
    {
        while (check_delimiter(str[i], del) == 1)
            i++;
        if (check_delimiter(str[i], del) == 0)
        {
            ct += 1;
            while (check_delimiter(str[i], del) == 0)
                i++;
        }
    }
    return (ct);
}

char    *get_str(char *str, char *del)
{
    char    *new_str = NULL;
    char    *ptr = NULL;
    int i = 0;

    new_str = malloc(sizeof(char) * (i + 1));
    while (i > 0)
    {
        *new_str = *ptr;
        new_str++;
        ptr++;
    }
}

char    **cns_split(char *str, char *del)
{
    int     i, j, ct;
    char    **split;

    ct = count_str(str, del);
    split = malloc(sizeof(char *) * (ct + 1));
    i = 0;
    while (*split)
    {
        while (check_delimiter(*str, del) == 1)
            str++;
        if (check_delimiter(*str, del) == 0)
        {
            len = 0;
            ptr = str;
            while (check_delimiter(*str, del) == 0)
            {
                len++;
                str++;
            }
        }
    }
}