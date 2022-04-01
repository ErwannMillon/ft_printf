#include "ft_printf.h"
#include "libft.h"

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

int	handle_p(long int p)
{
	char	*str;
	char	*hex;
	int		len;

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
