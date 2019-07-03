#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str);

int	main(void)
{
	printf("input:\" 	-2147483648 	456 \"\n");
	printf("libc:%d\n", atoi(" 	-2147483648 	456 "));
	printf("ft  :%d\n\n", ft_atoi(" 	-2147483648 	456 "));

	printf("input:\" 	+-2147483648 	456 \"\n");
	printf("libc:%d\n", atoi(" 	+-2147483648 	456 "));
	printf("ft  :%d\n\n", ft_atoi(" 	+-2147483648 	456 "));

	printf("input:\" 	9147483647 	456 \"\n");
	printf("libc:%d\n", atoi(" 	9147483647 	456 "));
	printf("ft  :%d\n\n", ft_atoi(" 	9147483647 	456 "));

	printf("input:\" 	+123 	456 \"\n");
	printf("libc:%d\n", atoi(" 	+123 	456 "));
	printf("ft  :%d\n\n", ft_atoi(" 	+123 	456 "));

	printf("input:\"-2147483648 	456 \"\n");
	printf("libc:%d\n", atoi("-2147483648 	456 "));
	printf("ft  :%d\n\n", ft_atoi("-2147483648 	456 "));

	printf("input:\"\"\n");
	printf("libc:%d\n", atoi(""));
	printf("ft  :%d\n\n", ft_atoi(""));

	printf("input:\"0\"\n");
	printf("libc:%d\n", atoi("0"));
	printf("ft  :%d\n\n", ft_atoi("0"));

	printf("input:\"-0\"\n");
	printf("libc:%d\n", atoi("-0"));
	printf("ft  :%d\n\n", ft_atoi("-0"));

	printf("input:\"-\"\n");
	printf("libc:%d\n", atoi("-"));
	printf("ft  :%d\n\n", ft_atoi("-"));

	return (0);
}
