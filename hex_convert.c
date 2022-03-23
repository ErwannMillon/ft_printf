#include <stdlib.h>
#include "libft.h"
#include <unistd.h>

static char	*ft_strrev(char *s)
{
	int		i;
	int		x;
	int		end;
	char	tmp;

	i = 0;
	x = 0;
	while (s[i])
		i++;
	end = i - 1;
	while (x < i / 2)
	{
		tmp = s[x];
		s[x] = s[end];
		s[end] = tmp;
		x++;
		end--;
	}
	// s[i] = 0;
	return (s);
}

char *base_convert(long int dec, char *str)
{
	char	*result;
	int	i;

	result = malloc(10);
	i = 0;
	if (dec == 0)
	{
		result[i] = '0';
		i++;
	}
	while (dec > 0)
	{
		result[i] = str[dec % ft_strlen(str)];
		dec = dec / ft_strlen(str);
		i++;
	}
	result[i] = 0;
	return (ft_strrev(result));
}

int handle_X(long int dec)
{
	char	*hex;
	int		len;
	int		i;

	i = 0;
	hex = base_convert(dec, "0123456789abcdef");
	while (hex[i])
	{
		hex[i] = ft_toupper(hex[i]);
		i++;
	}
	len = ft_strlen(hex);
	write(1, hex, len);
	free(hex);
	return (len);
}

int	handle_x(long int dec)
{
	char	*str;
	int		len;

	str = base_convert(dec, "0123456789abcdef");
	len = ft_strlen(str);
	write(1, str, len);
	free(str);
	return (len);
}

int handle_p(void	*p)
{
	char *str;
	char *hex;
	int len;

	hex = base_convert(p, "0123456789abcdef");
	str = ft_strjoin("0x", hex);
	len = ft_strlen(str);
	write(1, str, len);
	free(str);
	free(hex);
	return (len);
}

int	handle_o(long int dec)
{
	char	*str;
	int		len;

	str = base_convert(dec, "01234567");
	len = ft_strlen(str);
	write(1, str, len);
	free(str);
	return (len);
}
