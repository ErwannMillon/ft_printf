#include "ft_printf.h"
#include "libft.h"

int	handle_str_arg(char c, char *str)
{
	if (c == 'i')
	{
		if (ft_strncmp(str, "0x", 2) == 0)
		{
			//atoi_base(ft_substr(str, 2, strlen(str) - 2));

		}
		else if (ft_strncmp(str, "0", 1) == 0)
		{
			//atoi_base(ft_substr(str, 2, strlen(str) - 1));
		}
		else
		{
			// return (handle_o(str));
		}
	}
	if (c == 's')
	{
		return (handle_s(str));
	}
	return (0);
}

int	handle_lint_arg(char c, long int dec)
{
	//add lens
	if (c == 'd' || c == 'u')
	{
		ft_putnbr(dec);
	}
	if (c == 'x')
	{
		handle_x(dec);
	}
		if (c == 'X')
	{
		handle_X(dec);
	}
	// if (c == 's')
	// {
	// 	return (handle_s(str));
	// }
	return (0);
}

int handle_char_arg(char c, char b)
{
	if (c == 'c')
		write(1, &b, 1);
	return (1);
}
