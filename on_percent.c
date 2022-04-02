#include "ft_printf.h"
#include "libft.h"



int indexformat(char c)
{
	char	*str;
	int		i;

	i = 0;
	str = FORMATS;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int isformat(char c)
{
	char	*str;
	int		i;

	i = 0;
	str = FORMATS;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	fs_num(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] != '%')
			i++;
		if (str[i] && isformat(str[i]))
			count++;
		if (str[i])
			i++;
	}
	return (count);
}

char	str_seek(char *str)
{
	static int	i = 0;
	int			format_start;
	int			len;
	int			fs_num;

	format_start = 0;
	len = 0;
	while (str[i] && str[i] != '%')
	{
		write(1, &str[i], 1);
		i++;
	}
	if (str[i])
	{
		i++;
		if (str[i] && isformat(str[i]))
		{
			i++;
			return (str[i - 1]);
		}
		else
			return (-1);
	}
	else
	{
		i = 0;
		return(0);
	}
	// len += i;
	// return (len);
}

int	ft_printf(char	*str, ...)
{
	static va_list	list;
	int				len;

	va_start(list, str);
	char x = str_seek(str);
	len = ft_strlen(str);
	while (x)
	{
		if (x != -1)
		{
			// printf("%c\n", x);
			if (x == 's')
			{
				len += handle_str_arg(x, va_arg(list, char *)) - 2;
			}
			else if (x == 'i' || x == 'u' || x == 'd' || x == 'p' || x == 'x' || x == 'X')
			{
				len += handle_lint_arg(x, (long int)va_arg(list, int)) - 2;
			}
			else if (x == 'c')
			{
				len += handle_char_arg(x, va_arg(list, int)) - 2;
			}
			else if (x == '%')
			{
				len += (write(1, "%", 1)) - 2;
			}
		}
		else
			return(-1);
		x = str_seek(str);
	}
	return (len);
}