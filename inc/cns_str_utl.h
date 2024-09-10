#ifndef CNS_STR_UTL_H
# define CNS_STR_UTL_H

# include <stdlib.h>
# include <stdio.h>

size_t	cns_strlen(const char *str);
char    *cns_substr(const char *str, unsigned int start, size_t len);
char	*cns_strtrim(const char *s, const char *set);

#endif