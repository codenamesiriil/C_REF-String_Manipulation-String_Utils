#include ".\inc\cns_str_utl.h"

static int	is_in_set(const char *set, char c)
{
	while (*set != '\0')
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*cns_strtrim(const char *s, const char *set)
{
	size_t			trim = 0;
	size_t			len = cns_strlen(s);
	unsigned int	start = 0;
	unsigned int	i = 0;

	while (is_in_set(set, s[i++]))
		trim++;
	start = (unsigned int)trim + 1;
	while (i < len - 1)
		i++;
	while (is_in_set(set, s[i--]))
		trim++;

	char	*new_str;	
	new_str = cns_substr(s, start, len - trim);
	return (new_str);
}
