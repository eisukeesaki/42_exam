#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

int		main(void)
{
	char	*s;
	s = ft_strdup("abcdefg");
	printf("%s\n", s);
	free(s);
	return (0);
}
