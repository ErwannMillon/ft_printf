#include "ft_printf.h"
#include "libft.h"

int	handle_str_arg(char c, char *str)
{
	char	*sub;

	if (c == 's')
	{
		if (str)
			return (handle_s(str));
		else
			return (write(1, "(null)", 6));
	}
	return (0);
}

int	handle_lint_arg(char c, long int dec)
{
	if (c == 'd' || c == 'i')
	{
		ft_putnbr(dec);
		return (num_len(dec));
	}
	if (c == 'u')
	{
		ft_putnbr((unsigned int)dec);
		return (num_len((unsigned int)dec));
	}
	if (c == 'x')
		return (handle_x(dec));
	if (c == 'X')
		return (handle_X(dec));
	if (c == 'p')
	{
		if (dec)
			return (handle_p(dec));
		else
			return (write(1, "(nil)", 5));
	}
	return (0);
}

int	handle_char_arg(char c, char b)
{
	if (c == 'c')
		write(1, &b, 1);
	return (1);
}
