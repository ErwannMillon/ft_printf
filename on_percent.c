#include "ft_printf.h"
#include "libft.h"

int	on_percent(char *format)
{
	printf("\nstr: %s \n", format);
	return (0);
}

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

int str_seek(char *str)
{
	int	i;
	int	format_start;
	int len;

	format_start = 0;
	i = 0;
	len = 0;
	while (str[i])
	{
		while (str[i] && str[i] != '%')
		{
			write(1, &str[i], 1);
			i++;
		}
		format_start = i;
		while (str[i] && !isformat(str[i]))
			i++;
		on_percent(ft_substr(str, format_start, i - format_start + 2));	
		if (str[i])
			i++;
	}
	len += i;
	return (len);
}