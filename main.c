#include ".\inc\cns_str_utl.h"

int	main(void)
{
	{
		char str1[] = ".-..-.-.,.this is a string.,.-.,,,.-.,.--";
		char	*ptr;

		printf("CNS_STRTRIM:\n");
		ptr = cns_strtrim(str1, ",.-");
		printf("%s\n", ptr);
		free(ptr);
	}
	return (0);
}