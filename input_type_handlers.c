#include "ft_printf.h"
#include "libft.h"
//CHANGE ATOI TO_UPPER FOR HEX CHARS
int	handle_str_arg(char c, char *str)
{
	char	*sub;

	if (c == 'i')
	{
		if (ft_strncmp(str, "0x", 2) == 0)
		{
			// sub = ft_substr(str, 2, ft_strlen(str) - 2);
			// handle_d(atoi_base(sub, "0123456789"));
			free(sub);
 		}
		else if (ft_strncmp(str, "0", 1) == 0)
		{
			// atoi_base(ft_substr(str, 2, strlen(str) - 1));
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
	if (c == 'd'  || c == 'u' || c == 'i')
	{
		ft_putnbr(dec);
		return(num_len(dec));
	}
	if (c == 'x')
	{
		return(handle_x(dec));
	}
		if (c == 'X')
	{
		return(handle_X(dec));
	}
	if (c == 'p')
	{
		//account for extra two char len
		if (dec)
		{
			return(handle_p(dec));
		}
		else
		{
			return(write(1, "(nil)", 6) - 1);
		}
	}
	return (0);
}

int handle_char_arg(char c, char b)
{
	if (c == 'c')
		write(1, &b, 1);
	return (1);
}
