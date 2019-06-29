#include <stdio.h>

int		max(int *tab, unsigned int len);

int		main(void)
{
	int		array0[5] = {-42, 5, 8234, 2147483647, -5954983};
	int		array1[1] = {-42};
	int		array2[0] = {};

	printf("array0:%d\n", max(array0, 5));
	printf("array1:%d\n", max(array1, 1));
	printf("array2:%d\n", max(array2, 0));

	return (0);
}
