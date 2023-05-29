#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while(str[len])
		len++;
	return(len);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

int	main(int argc, char *argv[])
{
	if (argc)
	{
		ft_putstr(argv[0]);
		write(1, "\n", 1);
	}
	return (0);
}
