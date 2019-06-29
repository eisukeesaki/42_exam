#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *s1, char *s2);

int		main(void)
{
	char	ft_src[] = "some string";
	char	ft_dst[12] = "\0";

	char	src[] = "some string";
	char	dst[12] = "\0";

	printf("ft..:%s\n", ft_strcpy(ft_dst, ft_src));
	printf("libc:%s\n", strcpy(dst, src));
	return (0);
}
