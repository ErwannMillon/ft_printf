#include "ft_printf.h"
#include "libft.h"

int handle_X(long int dec)
{
	int		i;
	char	*str;
	int		len;

	i = 0;
	if (dec < 0)
		str = base_convert_neg(dec * -1, "0123456789ABCDEF");
	else
		str = base_convert(dec, "0123456789ABCDEF");
	len = ft_strlen(str);
	while (str[i])
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
	write(1, str, len);
	free(str);
	// if (dec < 0)
	// 	len++;
	return (len);
}

int	handle_x(long int dec)
{
	char	*str;
	int		len;
	
	if (dec < 0)
		str = base_convert_neg(dec * -1, "0123456789abcdef");
	else
		str = base_convert(dec, "0123456789abcdef");
	len = ft_strlen(str);
	// if (dec < 0)
	// 	write(1, "-", 1);
	write(1, str, len);
	free(str);
	// if (dec < 0)
	// 	len++;
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
