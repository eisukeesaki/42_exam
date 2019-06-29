#include <stdio.h>

void	ft_swap(int *a, int *b);

int		main(void)
{
	int	a;
	int	b;

	a = 4;
	b = 2;
	printf("<before>\na:%d\nb:%d\n</before>\n", a, b);
	ft_swap(&a, &b);
	printf("<after>\na:%d\nb:%d\n</after>\n", a, b);
	return (0);
}