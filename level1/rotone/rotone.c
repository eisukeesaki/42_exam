#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rotone(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if ((s[i] >= 'a' && s[i] < 'z') || (s[i] >= 'A' && s[i] < 'Z'))
			ft_putchar(s[i] + 1);
		else if (s[i] == 'z' || s[i] == 'Z')
			ft_putchar(s[i] - 25);
		else
			ft_putchar(s[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int ac, char **av)
{
	if (ac == 2)
		rotone(av[1]);
	else
		ft_putchar('\n');
	return (0);
}
